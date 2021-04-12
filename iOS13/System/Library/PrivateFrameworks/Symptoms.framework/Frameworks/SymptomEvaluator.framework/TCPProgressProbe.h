/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject;

@interface TCPProgressProbe : NSObject {

	NSObject*<OS_dispatch_queue> lqueue;
	const char* interfaceName;
	unsigned state;
	unsigned long long _countPremiumModeClients;
	BOOL _localFlowTracking;
	unsigned long long _interfaceIndex;

}

@property (nonatomic,readonly) unsigned long long interfaceIndex;              //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (assign,nonatomic) BOOL localFlowTracking;                           //@synthesize localFlowTracking=_localFlowTracking - In the implementation block
+(void)initialize;
+(id)probeForInterface:(id)arg1 ;
+(id)progressPrettyPrintUtility:(xtcpprogress_indicators*)arg1 ;
+(void)forceInvalidationFor:(id)arg1 periods:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)interfaceIndex;
-(BOOL)manage:(unsigned)arg1 outValue:(unsigned*)arg2 ;
-(BOOL)fetchMetricsForFlowsAged:(double)arg1 metrics:(xtcpprogress_indicators*)arg2 ;
-(BOOL)localFlowTracking;
-(void)setLocalFlowTracking:(BOOL)arg1 ;
-(BOOL)interfaceMappingIsCurrent;
-(id)_initForInterface:(id)arg1 ;
@end

