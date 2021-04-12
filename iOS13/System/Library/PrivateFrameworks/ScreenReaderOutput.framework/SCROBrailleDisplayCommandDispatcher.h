/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <libobjc.A.dylib/SCROBrailleDisplayCommandDispatcherProtocol.h>

@protocol SCROBrailleDisplayCommandDispatcherDelegate;
@class NSDictionary, NSString;

@interface SCROBrailleDisplayCommandDispatcher : NSObject <SCROBrailleDisplayCommandDispatcherProtocol> {

	NSDictionary* _commandDictionary;
	id<SCROBrailleDisplayCommandDispatcherDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCROBrailleDisplayCommandDispatcherDelegate> delegate; 
-(id)init;
-(id<SCROBrailleDisplayCommandDispatcherDelegate>)delegate;
-(void)setDelegate:(id<SCROBrailleDisplayCommandDispatcherDelegate>)arg1 ;
-(void)_handlePanLeftEvent:(id)arg1 ;
-(void)_handlePanRightEvent:(id)arg1 ;
-(void)_handleMoveLeftEvent:(id)arg1 ;
-(void)_handleMoveRightEvent:(id)arg1 ;
-(void)_handleRouterEvent:(id)arg1 ;
-(void)_handleDeleteEvent:(id)arg1 ;
-(void)_handleEscapeEvent:(id)arg1 ;
-(void)_handleReturnEvent:(id)arg1 ;
-(void)_handleTranslateEvent:(id)arg1 ;
-(void)_handleToggleContractedBrailleEvent:(id)arg1 ;
-(void)_handleToggleEightDotBrailleEvent:(id)arg1 ;
-(void)_handleUnsupportedEvent:(id)arg1 ;
-(BOOL)handleBrailleKeyEvent:(id)arg1 ;
-(void)_handleForwardDeleteEvent:(id)arg1 ;
@end

