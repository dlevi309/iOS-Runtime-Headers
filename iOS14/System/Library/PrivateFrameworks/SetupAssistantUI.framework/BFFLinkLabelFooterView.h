/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSMutableArray, UIView, NSAttributedString, NSString, UIColor;

@interface BFFLinkLabelFooterView : UIView {

	UILabel* _label;
	UILabel* _subtitleLabel;
	NSMutableArray* _linkHandlers;
	UIView* _topLine;
	BOOL _wantsSideBySideLayout;
	BOOL _wantsFromBottomLayout;
	double _flexibleHeight;
	NSAttributedString* _attributedSubtitleText;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) double flexibleHeight;                                    //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                     //@synthesize margins=_margins - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (nonatomic,retain) NSAttributedString * attributedSubtitleText;              //@synthesize attributedSubtitleText=_attributedSubtitleText - In the implementation block
@property (assign,nonatomic) BOOL wantsSideBySideLayout;                               //@synthesize wantsSideBySideLayout=_wantsSideBySideLayout - In the implementation block
@property (assign,nonatomic) BOOL wantsFromBottomLayout;                               //@synthesize wantsFromBottomLayout=_wantsFromBottomLayout - In the implementation block
@property (nonatomic,retain) UIColor * topLineColor; 
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)flexibleHeight;
-(void)setFlexibleHeight:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)removeAllLinks;
-(UIEdgeInsets)margins;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)setAttributedSubtitleText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitleText;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(BOOL)arg2 ;
-(unsigned long long)numberOfLinks;
-(void)addLinkWithTitle:(id)arg1 textStyle:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeLinkAtIndex:(unsigned long long)arg1 ;
-(BOOL)wantsSideBySideLayout;
-(BOOL)wantsFromBottomLayout;
-(UIColor *)topLineColor;
-(void)addLinkWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setTopLineColor:(UIColor *)arg1 ;
-(void)setWantsSideBySideLayout:(BOOL)arg1 ;
-(void)setWantsFromBottomLayout:(BOOL)arg1 ;
@end

