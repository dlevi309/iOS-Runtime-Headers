/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/

#import <Foundation/NSOperation.h>

@interface SOAsynchronousOperation : NSOperation {

	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(id)init;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(BOOL)isAsynchronous;
-(unsigned long long)state;
-(void)finish;
-(void)setState:(unsigned long long)arg1 ;
@end

