/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol SCROBrailleDriverProtocol <NSObject>
@optional
-(void)setBrailleDriverDelegate:(id)arg1;

@required
-(BOOL)isInputEnabled;
-(id)modelIdentifier;
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

