/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <libobjc.A.dylib/SCROBrailleDriverProtocol.h>

@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {

	BOOL _isDriverLoaded;
	NSString* _modelIdentifier;
	long long _mainSize;
	long long _statusSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isInputEnabled;
-(id)modelIdentifier;
-(void)dealloc;
-(unsigned long long)interfaceVersion;
-(int)loadDriverWithIOElement:(id)arg1 ;
-(BOOL)unloadDriver;
-(BOOL)isDriverLoaded;
-(BOOL)isSleeping;
-(BOOL)supportsBlinkingCursor;
-(BOOL)postsKeyboardEvents;
-(int)brailleInputMode;
-(id)getInputEvents;
-(long long)mainSize;
-(long long)statusSize;
-(BOOL)setMainCells:(const char*)arg1 length:(long long)arg2 ;
-(BOOL)setStatusCells:(const char*)arg1 length:(long long)arg2 ;
@end

