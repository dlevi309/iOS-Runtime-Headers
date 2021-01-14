/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/

#import <PhotoVision/PVPersonDeduperStep.h>

@interface PVPersonDeduperTimeStep : PVPersonDeduperStep
-(id)name;
-(id)metricsKey;
-(BOOL)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4 ;
-(void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 resultBlock:(/*^block*/id)arg4 ;
@end

