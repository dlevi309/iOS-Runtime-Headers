/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBProcessManagerObserver.h>

@class FBProcess, BSWatchdog, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver> {

	FBProcess* _process;
	double _timeout;
	BSWatchdog* _watchdog;

}

@property (nonatomic,readonly) FBProcess * process;                 //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(FBProcess *)process;
-(id)initWithProcess:(id)arg1 ;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_didComplete;
-(id)initWithProcess:(id)arg1 timeout:(double)arg2 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
@end

