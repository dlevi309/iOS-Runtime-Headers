/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTLearnedLocationReconcilerModel : NSObject
-(double)weightForVisit:(id)arg1 modelContext:(id)arg2 ;
-(double)scoreForDeviceClass:(id)arg1 ;
-(double)_weightWithDeviceWeight:(double)arg1 visitsPercentage:(double)arg2 transitionsPercentage:(double)arg3 semanticLabel:(BOOL)arg4 firstVisit:(BOOL)arg5 earliestTransition:(BOOL)arg6 rawLocationCount:(unsigned long long)arg7 ;
@end

