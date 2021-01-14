/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITextItemInteractionHandler, _UITextItemInteracting, _UITextContent;
#import <UIKitCore/UIKitCore-Structs.h>
@class UINotificationFeedbackGenerator, _UIHighlightView, UIView;

@interface _UITextInteractableItem : NSObject {

	UINotificationFeedbackGenerator* _feedbackGenerator;
	_UIHighlightView* _highlightView;
	id<_UITextItemInteractionHandler> _handler;
	UIView*<_UITextItemInteracting> _textItemInteractingView;
	id<_UITextContent> _textContent;
	NSRange _range;
	CGPoint _location;

}

@property (assign,nonatomic) NSRange range;                                                               //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) CGPoint location;                                                            //@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) id<_UITextContent> textContent;                                       //@synthesize textContent=_textContent - In the implementation block
@property (nonatomic,retain) id<_UITextItemInteractionHandler> handler;                                   //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) UIView*<_UITextItemInteracting> textItemInteractingView;              //@synthesize textItemInteractingView=_textItemInteractingView - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long _preferredContextMenuLayout; 
+(id)interactableAttachment:(id)arg1 range:(NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(CGPoint)arg4 ;
+(id)interactableLink:(id)arg1 range:(NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(CGPoint)arg4 ;
+(void)_removeHighlight;
+(id)_sharedHighlightView;
-(CGRect)bounds;
-(BOOL)isLink;
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(void)setHandler:(id<_UITextItemInteractionHandler>)arg1 ;
-(CGPoint)location;
-(void)highlight;
-(void)setLocation:(CGPoint)arg1 ;
-(void)unhighlight;
-(id<_UITextContent>)textContent;
-(BOOL)isAttachment;
-(id)contextMenuConfiguration;
-(void)setTextItemInteractingView:(UIView*<_UITextItemInteracting>)arg1 ;
-(BOOL)_allowHighlight;
-(void)setTextContent:(id<_UITextContent>)arg1 ;
-(unsigned long long)_preferredContextMenuLayout;
-(id<_UITextItemInteractionHandler>)handler;
-(void)_warnForInvalidAction;
-(UIView*<_UITextItemInteracting>)textItemInteractingView;
-(BOOL)_allowInteraction:(long long)arg1 ;
-(void)invokeDefaultAction;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)canInvokeDefaultAction;
-(void)dealloc;
@end

