/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMDAccountHandle, HMDAccountIdentifier, NSDictionary, NSNumber, NSString, NSArray;

@interface HMDUserModel : HMDBackingStoreModelObject

@property (nonatomic,retain) HMDAccountHandle * accountHandle; 
@property (nonatomic,retain) HMDAccountIdentifier * accountIdentifier; 
@property (nonatomic,retain) NSDictionary * pairingIdentity; 
@property (nonatomic,retain) NSNumber * privilege; 
@property (nonatomic,retain) NSNumber * remoteAccessAllowed; 
@property (nonatomic,retain) NSNumber * presenceAuthorizationStatus; 
@property (nonatomic,retain) NSString * relayIdentifier; 
@property (nonatomic,retain) NSArray * relayAccessTokens; 
@property (nonatomic,retain) NSString * changeTag; 
@property (nonatomic,retain) NSString * userID; 
@property (nonatomic,retain) NSNumber * camerasAccessLevel; 
+(id)properties;
@end

