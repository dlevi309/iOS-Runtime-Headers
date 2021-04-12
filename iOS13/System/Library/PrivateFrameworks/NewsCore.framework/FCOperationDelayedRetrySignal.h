/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)onQueue:(id)arg1 signal:(/*^block*/id)arg2 ;
-(id)initWithDelay:(double)arg1 ;
@end

