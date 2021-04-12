/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol SCROBrailleDisplayCommandDispatcherProtocol <NSObject>
@property (assign,nonatomic,__weak) id<SCROBrailleDisplayCommandDispatcherDelegate> delegate; 
@required
-(id<SCROBrailleDisplayCommandDispatcherDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)handleBrailleKeyEvent:(id)arg1;

@end

