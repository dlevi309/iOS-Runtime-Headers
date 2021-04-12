/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWMessageHandler.h>
#import <libobjc.A.dylib/SWTimeoutManager.h>

@protocol SWTimeoutManager <NSObject>
@required
-(void)onTimeout:(/*^block*/id)arg1;

@end


@class NSMutableArray, NFStateMachine, NSTimer, NSString;

@interface SWTimeoutManager : NSObject <SWMessageHandler, SWTimeoutManager> {

	NSMutableArray* _timeoutBlocks;
	NFStateMachine* _stateMachine;
	NSTimer* _timer;

}

@property (nonatomic,readonly) NSMutableArray * timeoutBlocks;              //@synthesize timeoutBlocks=_timeoutBlocks - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;               //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                               //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NFStateMachine *)stateMachine;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(void)onTimeout:(/*^block*/id)arg1 ;
-(id)initWithTimeout:(double)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 ;
-(NSMutableArray *)timeoutBlocks;
@end

