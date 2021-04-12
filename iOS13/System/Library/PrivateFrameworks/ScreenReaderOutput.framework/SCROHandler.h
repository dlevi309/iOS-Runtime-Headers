/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <libobjc.A.dylib/SCROHandlerProtocol.h>

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol> {

	NSLock* _lock;
	BOOL isInvalid;
	id _callbackDelegate;

}

@property (assign,nonatomic,__weak) id callbackDelegate;              //@synthesize callbackDelegate=_callbackDelegate - In the implementation block
-(id)init;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(void)setCallbackDelegate:(id)arg1 ;
-(id)callbackDelegate;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4 ;
-(int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
@end

