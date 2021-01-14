/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)progressPrettyPrintUtility:(xtcpprogress_indicators*)arg1 ;
+(id)probeForInterface:(id)arg1 ;
+(void)forceInvalidationFor:(id)arg1 periods:(unsigned long long)arg2 ;
-(unsigned long long)interfaceIndex;
-(id)description;
-(void)fetchMetricsForFlowsAged:(double)arg1 metrics:(xtcpprogress_indicators*)arg2 resultBlock:(/*^block*/id)arg3 ;
-(BOOL)localFlowTracking;
-(BOOL)interfaceMappingIsCurrent;
-(void)setLocalFlowTracking:(BOOL)arg1 ;
-(id)_initForInterface:(id)arg1 ;
-(BOOL)manage:(unsigned)arg1 outValue:(unsigned*)arg2 ;
-(void)dealloc;
@end

