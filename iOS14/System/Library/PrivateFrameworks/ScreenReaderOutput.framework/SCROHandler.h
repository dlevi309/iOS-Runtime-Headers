/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unlock;
-(id)init;
-(void)lock;
-(void)invalidate;
-(void)setCallbackDelegate:(id)arg1 ;
-(id)callbackDelegate;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4 ;
-(int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
@end

