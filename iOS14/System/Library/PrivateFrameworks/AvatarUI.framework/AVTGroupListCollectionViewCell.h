/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIVisualEffectView, UILabel, UIImageView;

@interface AVTGroupListCollectionViewCell : UICollectionViewCell {

	NSString* _title;
	NSString* _symbolName;
	UIVisualEffectView* _visualEffectView;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * symbolName;                                  //@synthesize symbolName=_symbolName - In the implementation block
+(id)cellIdentifier;
+(id)highlightedBackgroundColor;
+(id)defaultSymbolImageName;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(NSString *)symbolName;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UIVisualEffectView *)visualEffectView;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setupContent;
-(double)estimatedLabelWidthForContainerWidth:(double)arg1 ;
-(void)setSymbolName:(NSString *)arg1 ;
-(UILabel *)label;
-(NSString *)title;
@end

