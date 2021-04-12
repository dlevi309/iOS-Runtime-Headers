/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSDictionary, NSNumber, NSDate, NSString, NSArray;

@interface HMDOutgoingHomeInvitationModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSDictionary * user; 
@property (nonatomic,retain) NSNumber * invitationState; 
@property (nonatomic,retain) NSDate * expiryDate; 
@property (nonatomic,retain) NSString * messageIdentifier; 
@property (nonatomic,retain) NSNumber * responseReceived; 
@property (nonatomic,retain) NSString * inviteeDestinationAddress; 
@property (nonatomic,retain) NSArray * operations; 
@property (nonatomic,retain) NSArray * operationIdentifiers; 
+(id)properties;
-(id)dependentUUIDs;
@end

