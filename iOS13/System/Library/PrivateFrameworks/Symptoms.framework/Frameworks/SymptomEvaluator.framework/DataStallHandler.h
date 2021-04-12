/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSMutableDictionary, NSSet, NSString;

@interface DataStallHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {

	NSMutableDictionary* _store;
	id _triggerDisconnectObserver;
	id _primaryObserver;
	BOOL _gateOpen;
	BOOL _forceNoGate;
	long long _primaryInterfaceType;
	NSSet* awdDirectSymptoms;
	NSMutableDictionary* awdDirectHistory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(unsigned long long)uniqForegroundCountForInterfaceType:(long long)arg1 stallType:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)_reset:(id)arg1 interfaceType:(long long)arg2 stallType:(unsigned long long)arg3 ;
-(void)_cleanupAwdDirectHistory;
-(unsigned long long)_uniqForegroundCountForInterfaceType:(long long)arg1 stallType:(unsigned long long)arg2 ;
-(void)_pruneStaleEndpointsFor:(id)arg1 onInterfaceType:(long long)arg2 stallType:(unsigned long long)arg3 ;
-(void)processStall:(id)arg1 procName:(id)arg2 endpoint:(id)arg3 foreground:(id)arg4 interfaceType:(long long)arg5 stallType:(unsigned long long)arg6 ;
-(void)_checkDampeningAndPostAWDDirectMetric:(id)arg1 symptomName:(id)arg2 foregroundState:(BOOL)arg3 timeStamp:(double)arg4 signature:(id)arg5 ;
-(BOOL)_getAWDDirectDampeningStatus:(int*)arg1 posted:(int*)arg2 forProcess:(id)arg3 withTimeStamp:(double)arg4 ;
@end

