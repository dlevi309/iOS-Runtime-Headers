/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface WFActionDrawerAppsCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate> {

	NSString* _title;
	UIImage* _appIconImage;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * appIconImage;                    //@synthesize appIconImage=_appIconImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)preferredSize;
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(UIImage *)appIconImage;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(NSString *)title;
-(void)configureWithTitle:(id)arg1 appIconImage:(id)arg2 ;
@end

