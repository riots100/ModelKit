//
//  MKitParseInstallation.h
//  ModelKit
//
//  Created by Jon Gilkison on 11/17/12.
//  Copyright (c) 2012 Interfacelab LLC. All rights reserved.
//

#import "MKitParseModel.h"
#import "MKitServiceInstallation.h"

/**
 * The device installation for Parse.  Note that this is a model and can be extended
 */
@interface MKitParseInstallation : MKitParseModel<MKitServiceInstallation>

@property (nonatomic, copy) NSString *deviceType;           /**< The type of device, "ios" or "android" */
@property (nonatomic, copy) NSString *installationId;       /**< The installation ID for the device used by the service */
@property (nonatomic, copy) NSString *deviceToken;          /**< The unique identifier for the device generated by the device */
@property (nonatomic, assign) NSInteger badge;              /**< The current badge value for the device */
@property (nonatomic, copy) NSString *timeZone;             /**< The current timezone for the device */
@property (nonatomic, retain) NSMutableArray *channels;     /**< The channels this device is subscribed to */


@end