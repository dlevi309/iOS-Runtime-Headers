/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIAnalytics : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)sendEventForFaceEvent:(id)arg1 homePersonManagerUUID:(id)arg2 camera:(id)arg3 ;
+(void)sendEventForPersonsModels:(id)arg1 ;
+(long long)bucketForValue:(long long)arg1 usingBuckets:(id)arg2 ;
+(void)sendEventForClusteringTask:(id)arg1 ;
@end

