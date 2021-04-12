/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRXKeyboardControllerDelegate, _TVRXKeyboardImpl;
@class TVRCKeyboardAttributes, NSString;

@interface _TVRXKeyboardController : NSObject {

	id<_TVRXKeyboardControllerDelegate> _delegate;
	id<_TVRXKeyboardImpl> _impl;

}

@property (setter=_setImpl:,getter=_impl,nonatomic,retain) id<_TVRXKeyboardImpl> impl;              //@synthesize impl=_impl - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRXKeyboardControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (nonatomic,readonly) TVRCKeyboardAttributes * attributes; 
@property (nonatomic,copy) NSString * text; 
-(id<_TVRXKeyboardControllerDelegate>)delegate;
-(void)_setImpl:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isEditing;
-(TVRCKeyboardAttributes *)attributes;
-(void)setDelegate:(id<_TVRXKeyboardControllerDelegate>)arg1 ;
-(NSString *)text;
-(void)_endSession;
-(id)_impl;
-(id)_init;
-(void)_editingSessionBeganWithAttributes:(id)arg1 ;
-(void)_editingSessionUpdatedText:(id)arg1 ;
-(void)_editingSessionEnded;
-(void)_editingSessionUpdatedAttributes:(id)arg1 ;
-(void)sendReturnKey;
-(void)_beginSessionWithAttributes:(id)arg1 ;
-(void)sendTextActionPayload:(id)arg1 ;
-(void)_textActionPayloadGenerated:(id)arg1 ;
@end

