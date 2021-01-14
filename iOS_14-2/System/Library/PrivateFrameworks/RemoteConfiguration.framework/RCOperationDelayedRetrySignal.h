/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/RCOperationRetrySignal.h>

@class NSString;

@interface RCOperationDelayedRetrySignal : NSObject <RCOperationRetrySignal> {

	unsigned long long _signalTime;
	double _delay;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithDelay:(double)arg1 ;
-(void)onQueue:(id)arg1 signal:(/*^block*/id)arg2 ;
@end

