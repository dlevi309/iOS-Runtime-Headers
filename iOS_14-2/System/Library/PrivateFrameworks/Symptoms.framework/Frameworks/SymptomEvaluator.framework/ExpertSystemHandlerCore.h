/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface ExpertSystemHandlerCore : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {

	NSMutableDictionary* _activeTimers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureClass:(id)arg1 ;
+(id)internalStateDictionary;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(int)configureInstance:(id)arg1 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)cancelAllTimers;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(void)scheduleTimerFor:(unsigned long long)arg1 leeway:(unsigned long long)arg2 identifier:(id)arg3 queue:(id)arg4 eventHandler:(/*^block*/id)arg5 cancelHandler:(/*^block*/id)arg6 ;
-(void)cancelTimerWithIdentifier:(id)arg1 ;
@end

