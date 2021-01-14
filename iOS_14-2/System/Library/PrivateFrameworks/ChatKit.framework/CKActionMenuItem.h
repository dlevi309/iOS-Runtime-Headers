/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)animate:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
+(id)itemWithImageTemplate:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTarget:(id)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isSelected;
-(SEL)action;
-(void)sendAction;
-(void)setSelected:(BOOL)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)updateForState:(long long)arg1 touchInside:(BOOL)arg2 ;
-(void)setView:(UIView*<CKActionMenuItemView>)arg1 ;
-(id)description;
-(UIView*<CKActionMenuItemView>)view;
-(BOOL)isHighlighted;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)target;
-(BOOL)isEnabled;
-(void)setLabel:(UILabel*<CKActionMenuItemView>)arg1 ;
-(id)initWithView:(id)arg1 label:(id)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(UILabel*<CKActionMenuItemView>)label;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

