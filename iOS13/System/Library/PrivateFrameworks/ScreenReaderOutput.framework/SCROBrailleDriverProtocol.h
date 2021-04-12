/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol SCROBrailleDriverProtocol <NSObject>
@optional
-(void)setBrailleDriverDelegate:(id)arg1;

@required
-(id)modelIdentifier;
-(BOOL)isInputEnabled;
-(unsigned long long)interfaceVersion;
-(int)loadDriverWithIOElement:(id)arg1;
-(BOOL)unloadDriver;
-(BOOL)isDriverLoaded;
-(BOOL)isSleeping;
-(BOOL)supportsBlinkingCursor;
-(BOOL)postsKeyboardEvents;
-(int)brailleInputMode;
-(id)getInputEvents;
-(long long)mainSize;
-(long long)statusSize;
-(BOOL)setMainCells:(const char*)arg1 length:(long long)arg2;
-(BOOL)setStatusCells:(const char*)arg1 length:(long long)arg2;

@end

