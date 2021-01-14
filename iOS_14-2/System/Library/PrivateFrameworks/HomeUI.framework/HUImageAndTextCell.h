/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellSeparatorAppearanceDefining.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UITextView, UIImageView, NSArray, UILayoutGuide, NSString;

@interface HUImageAndTextCell : UITableViewCell <HUCellSeparatorAppearanceDefining, HUCellProtocol> {

	HFItem* _item;
	UITextView* _messageTextView;
	UIImageView* _infoImageView;
	NSArray* _contentConstraints;
	UILayoutGuide* _infoImageViewTrailingMarginLayoutGuide;
	CGSize _imageViewRecommendedSize;

}

@property (nonatomic,readonly) UIImageView * infoImageView;                                         //@synthesize infoImageView=_infoImageView - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                                          //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * infoImageViewTrailingMarginLayoutGuide;              //@synthesize infoImageViewTrailingMarginLayoutGuide=_infoImageViewTrailingMarginLayoutGuide - In the implementation block
@property (nonatomic,readonly) UITextView * messageTextView;                                        //@synthesize messageTextView=_messageTextView - In the implementation block
@property (assign,nonatomic) CGSize imageViewRecommendedSize;                                       //@synthesize imageViewRecommendedSize=_imageViewRecommendedSize - In the implementation block
@property (nonatomic,readonly) BOOL prefersSeparatorsHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                         //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(NSArray *)contentConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UITextView *)messageTextView;
-(UIImageView *)infoImageView;
-(void)setImageViewRecommendedSize:(CGSize)arg1 ;
-(void)_resetContentConstraints;
-(CGSize)imageViewRecommendedSize;
-(UILayoutGuide *)infoImageViewTrailingMarginLayoutGuide;
-(BOOL)prefersSeparatorsHidden;
@end

