/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTLearnedLocationReconcilerModel : NSObject
-(double)weightForVisit:(id)arg1 modelContext:(id)arg2 ;
-(double)scoreForDeviceClass:(id)arg1 ;
-(double)_weightWithDeviceWeight:(double)arg1 visitsPercentage:(double)arg2 transitionsPercentage:(double)arg3 semanticLabel:(BOOL)arg4 firstVisit:(BOOL)arg5 earliestTransition:(BOOL)arg6 rawLocationCount:(unsigned long long)arg7 ;
@end

