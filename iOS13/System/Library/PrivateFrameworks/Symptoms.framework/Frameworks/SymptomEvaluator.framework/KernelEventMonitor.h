/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface KernelEventMonitor : NSObject <ConfigurableObjectProtocol> {

	NSString* _symptomName;
	int _nativeSocket;
	int _nativeSocket6;
	NSObject*<OS_dispatch_source> _kernelNotificationSource;
	NSObject*<OS_dispatch_source> _kernelNotificationSource6;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(NSString *)description;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)_handleNetworkEvent:(kern_event_msg*)arg1 ;
-(void)_handleSocket:(int)arg1 ;
-(void)initListening;
@end

