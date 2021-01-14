/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) NSNumber * announceAccessAllowed; 
@property (nonatomic,retain) NSNumber * announceAccessLevel; 
+(id)properties;
@end

