/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)pushAutocorrections:(id)arg1 requestToken:(id)arg2 ;
-(void)processPayloadInfo:(id)arg1 ;
-(id<TIKeyboardInputManagerToImplProtocol>)delegate;
-(void)setDelegate:(id<TIKeyboardInputManagerToImplProtocol>)arg1 ;
@end

