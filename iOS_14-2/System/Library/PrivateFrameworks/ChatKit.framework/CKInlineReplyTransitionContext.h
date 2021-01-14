/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSDictionary, NSString;

@interface CKInlineReplyTransitionContext : NSObject {

	BOOL _presentWithKeyboard;
	BOOL _keyboardWasUpInMainTranscript;
	NSDictionary* _visibleChatItemToFrameMap;
	NSString* _anchorChatItemGUID;

}

@property (nonatomic,retain) NSDictionary * visibleChatItemToFrameMap;              //@synthesize visibleChatItemToFrameMap=_visibleChatItemToFrameMap - In the implementation block
@property (nonatomic,copy) NSString * anchorChatItemGUID;                           //@synthesize anchorChatItemGUID=_anchorChatItemGUID - In the implementation block
@property (assign,nonatomic) BOOL presentWithKeyboard;                              //@synthesize presentWithKeyboard=_presentWithKeyboard - In the implementation block
@property (assign,nonatomic) BOOL keyboardWasUpInMainTranscript;                    //@synthesize keyboardWasUpInMainTranscript=_keyboardWasUpInMainTranscript - In the implementation block
-(void)setVisibleChatItemToFrameMap:(NSDictionary *)arg1 ;
-(void)setAnchorChatItemGUID:(NSString *)arg1 ;
-(void)setPresentWithKeyboard:(BOOL)arg1 ;
-(void)setKeyboardWasUpInMainTranscript:(BOOL)arg1 ;
-(id)description;
-(NSString *)anchorChatItemGUID;
-(NSDictionary *)visibleChatItemToFrameMap;
-(BOOL)presentWithKeyboard;
-(BOOL)keyboardWasUpInMainTranscript;
@end

