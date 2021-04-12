/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/TIKeyboardInputManagerToImplProtocol.h>

@protocol TIKeyboardInputManagerToImplProtocol;
@class NSString;

@interface _UIKeyboardImplProxy : NSObject <TIKeyboardInputManagerToImplProtocol> {

	id<TIKeyboardInputManagerToImplProtocol> _delegate;

}

@property (assign,nonatomic) id<TIKeyboardInputManagerToImplProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TIKeyboardInputManagerToImplProtocol>)delegate;
-(void)setDelegate:(id<TIKeyboardInputManagerToImplProtocol>)arg1 ;
-(void)processPayloadInfo:(id)arg1 ;
-(void)pushAutocorrections:(id)arg1 requestToken:(id)arg2 ;
@end

