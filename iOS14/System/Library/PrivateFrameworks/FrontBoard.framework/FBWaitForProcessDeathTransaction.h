/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FBProcess *)process;
-(BOOL)_canBeInterrupted;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(id)initWithProcess:(id)arg1 ;
-(void)_begin;
-(void)_didComplete;
-(id)_customizedDescriptionProperties;
-(double)timeout;
-(id)initWithProcess:(id)arg1 timeout:(double)arg2 ;
@end

