/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/

#import <Foundation/NSOperation.h>

@interface SOAsynchronousOperation : NSOperation {

	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)finish;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(void)main;
-(BOOL)isReady;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isExecuting;
-(unsigned long long)state;
@end

