/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol SCROBrailleDisplayCommandDispatcherProtocol <NSObject>
@property (assign,nonatomic,__weak) id<SCROBrailleDisplayCommandDispatcherDelegate> delegate; 
@required
-(id<SCROBrailleDisplayCommandDispatcherDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)handleBrailleKeyEvent:(id)arg1;

@end

