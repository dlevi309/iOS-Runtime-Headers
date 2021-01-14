/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSString;

@interface ResourceNotifyHandler : NSObject <ConfigurableObjectProtocol> {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _port;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)processOnBatteryOnly;
+(id)configureClass:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(int)configureInstance:(id)arg1 ;
-(void)resouceNotifyEvent:(id)arg1 triggeredBy:(char)arg2 pid:(int)arg3 path:(char)arg4 endTime:(mach_timespec)arg5 observedValue:(long long)arg6 observationWindow:(long long)arg7 limitValue:(long long)arg8 limitWindow:(long long)arg9 fatal:(BOOL)arg10 ;
-(id)init;
-(NSString *)description;
-(void)setupResourceNotifyReceiver;
@end

