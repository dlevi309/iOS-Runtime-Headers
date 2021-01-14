/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/ThroughputAdviserEnvironment.h>
#import <SymptomEvaluator/SymptomsAWDObserverDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyShimDelegate.h>

@class CellThroughputAdviser, NSString;

@interface CellThroughputAdviserEnvironment : ThroughputAdviserEnvironment <SymptomsAWDObserverDelegate, CoreTelephonyShimDelegate> {

	BOOL _registeredWithAWDObserver;
	CellThroughputAdviser* _cellThroughputAdviser;

}

@property (readonly) CellThroughputAdviser * cellThroughputAdviser;              //@synthesize cellThroughputAdviser=_cellThroughputAdviser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)handleEvent:(id)arg1 ;
-(void)infoHighThroughputChangedForSubscription:(id)arg1 ;
-(void)dealloc;
-(CellThroughputAdviser *)cellThroughputAdviser;
-(void)monitorSDMActivations:(BOOL)arg1 ;
@end

