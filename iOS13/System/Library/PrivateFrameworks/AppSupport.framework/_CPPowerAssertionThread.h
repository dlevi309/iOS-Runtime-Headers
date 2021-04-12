/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/

#import <Foundation/NSThread.h>

@class NSTimer, NSDate;

@interface _CPPowerAssertionThread : NSThread {

	NSTimer* _timer;
	NSDate* _earliest;

}
-(void)main;
-(void)didTimeOut:(id)arg1 ;
-(void)addAssertion:(id)arg1 ;
@end

