/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

