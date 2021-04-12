/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKActionMenuItemView;
@class UIView, UILabel;

@interface CKActionMenuItem : NSObject {

	BOOL _enabled;
	BOOL _highlighted;
	BOOL _selected;
	UIView*<CKActionMenuItemView> _view;
	UILabel*<CKActionMenuItemView> _label;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) UIView*<CKActionMenuItemView> view;                 //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UILabel*<CKActionMenuItemView> label;               //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) id target;                                          //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                         //@synthesize action=_action - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
+(id)itemWithImageTemplate:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3 target:(id)arg4 action:(SEL)arg5 ;
+(void)animate:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(BOOL)isEnabled;
-(SEL)action;
-(void)setLabel:(UILabel*<CKActionMenuItemView>)arg1 ;
-(UILabel*<CKActionMenuItemView>)label;
-(BOOL)isSelected;
-(UIView*<CKActionMenuItemView>)view;
-(void)setView:(UIView*<CKActionMenuItemView>)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithView:(id)arg1 label:(id)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(void)sendAction;
-(void)updateForState:(long long)arg1 touchInside:(BOOL)arg2 ;
@end

