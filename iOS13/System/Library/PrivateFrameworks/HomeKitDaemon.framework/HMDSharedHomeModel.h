/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSData, NSNumber;

@interface HMDSharedHomeModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSData * homeData; 
@property (nonatomic,retain) NSNumber * configurationVersion; 
+(id)properties;
-(BOOL)isReplayable;
@end

