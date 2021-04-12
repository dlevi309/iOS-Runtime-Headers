/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIContextMenuTemplateControllerInterface;
@class UIView, UIContextMenuInteraction;

@interface VUIActiveInteractionView : NSObject {

	UIView* _highlightedView;
	UIContextMenuInteraction* _activeInteraction;
	id<VUIContextMenuTemplateControllerInterface> _templateInterface;

}

@property (assign,nonatomic,__weak) UIView * highlightedView;                                                     //@synthesize highlightedView=_highlightedView - In the implementation block
@property (assign,nonatomic,__weak) UIContextMenuInteraction * activeInteraction;                                 //@synthesize activeInteraction=_activeInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<VUIContextMenuTemplateControllerInterface> templateInterface;              //@synthesize templateInterface=_templateInterface - In the implementation block
+(id)sharedInstance;
-(void)setActiveInteraction:(UIContextMenuInteraction *)arg1 ;
-(UIContextMenuInteraction *)activeInteraction;
-(UIView *)highlightedView;
-(void)setHighlightedView:(UIView *)arg1 ;
-(void)setTemplateInterface:(id<VUIContextMenuTemplateControllerInterface>)arg1 ;
-(id<VUIContextMenuTemplateControllerInterface>)templateInterface;
@end

