/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationRetrySignal.h>

@class NSString;

@interface FCOperationDelayedRetrySignal : NSObject <FCOperationRetrySignal> {

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

