/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSKSearchTarget <NSObject>
@optional
-(void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3;
-(id)childSearchTargets;
-(void)layoutSearchForAnnotationWithHitBlock:(/*^block*/id)arg1;
-(id)childAnnotationSearchTargets;
-(void)layoutSearchForSpellingErrorsWithHitBlock:(/*^block*/id)arg1 stop:(BOOL*)arg2;

@end

