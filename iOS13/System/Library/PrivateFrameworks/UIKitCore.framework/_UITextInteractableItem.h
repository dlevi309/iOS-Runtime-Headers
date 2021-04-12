/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_sharedHighlightView;
+(void)_removeHighlight;
+(id)interactableAttachment:(id)arg1 range:(NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(CGPoint)arg4 ;
+(id)interactableLink:(id)arg1 range:(NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(CGPoint)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id<_UITextItemInteractionHandler>)handler;
-(void)setHandler:(id<_UITextItemInteractionHandler>)arg1 ;
-(NSRange)range;
-(CGPoint)location;
-(CGRect)bounds;
-(void)setLocation:(CGPoint)arg1 ;
-(id)contextMenuConfiguration;
-(void)setRange:(NSRange)arg1 ;
-(void)setTextItemInteractingView:(UIView*<_UITextItemInteracting>)arg1 ;
-(void)unhighlight;
-(BOOL)_allowInteraction:(long long)arg1 ;
-(BOOL)_allowHighlight;
-(void)highlight;
-(UIView*<_UITextItemInteracting>)textItemInteractingView;
-(void)_warnForInvalidAction;
-(BOOL)isLink;
-(BOOL)isAttachment;
-(BOOL)canInvokeDefaultAction;
-(void)invokeDefaultAction;
-(unsigned long long)_preferredContextMenuLayout;
-(id<_UITextContent>)textContent;
-(void)setTextContent:(id<_UITextContent>)arg1 ;
@end

