/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSKSearchable <TSKModel>
@optional
-(id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(/*^block*/id)arg3;
-(id)searchForAnnotationsWithHitBlock:(/*^block*/id)arg1;
-(void)continueSearch:(id)arg1;
-(void)continueAnnotationSearch:(id)arg1;
-(id)childCommandForReplaceAllCommand:(id)arg1;

@end

