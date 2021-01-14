/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class TLKRichText, TLKImage, NSString, TLKImageView, UIFont;

@interface TLKTextButton : UIButton {

	BOOL _matchesHeightForAlignmentRectWithIntrinsicContentSize;
	BOOL _attributedTitleExplicitlySet;
	unsigned long long _prominence;
	TLKRichText* _richTitle;
	TLKImage* _tlkImage;
	NSString* _title;
	long long _alignment;
	TLKImageView* _tlkImageView;

}

@property (nonatomic,retain) TLKImageView * tlkImageView;                                   //@synthesize tlkImageView=_tlkImageView - In the implementation block
@property (assign) BOOL attributedTitleExplicitlySet;                                       //@synthesize attributedTitleExplicitlySet=_attributedTitleExplicitlySet - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;                                 //@synthesize prominence=_prominence - In the implementation block
@property (nonatomic,copy) TLKRichText * richTitle;                                         //@synthesize richTitle=_richTitle - In the implementation block
@property (nonatomic,copy) TLKImage * tlkImage;                                             //@synthesize tlkImage=_tlkImage - In the implementation block
@property (assign) BOOL matchesHeightForAlignmentRectWithIntrinsicContentSize;              //@synthesize matchesHeightForAlignmentRectWithIntrinsicContentSize=_matchesHeightForAlignmentRectWithIntrinsicContentSize - In the implementation block
@property (nonatomic,copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long alignment;                                           //@synthesize alignment=_alignment - In the implementation block
-(void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
-(void)setProminence:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(TLKImage *)tlkImage;
-(id)init;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(long long)alignment;
-(BOOL)matchesHeightForAlignmentRectWithIntrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setMatchesHeightForAlignmentRectWithIntrinsicContentSize:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setAttributedTitleExplicitlySet:(BOOL)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setAlignment:(long long)arg1 ;
-(BOOL)attributedTitleExplicitlySet;
-(unsigned long long)prominence;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setRichTitle:(TLKRichText *)arg1 ;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTlkImageView:(TLKImageView *)arg1 ;
-(TLKRichText *)richTitle;
-(BOOL)allowsVibrancy;
-(void)setTlkImage:(TLKImage *)arg1 ;
-(BOOL)hasTemplateUIImage;
-(BOOL)isImageMode;
-(void)updateAttributedTitle;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(TLKImageView *)tlkImageView;
-(NSString *)title;
-(void)_updateSelectionViewForState:(unsigned long long)arg1 ;
-(UIFont *)font;
@end

