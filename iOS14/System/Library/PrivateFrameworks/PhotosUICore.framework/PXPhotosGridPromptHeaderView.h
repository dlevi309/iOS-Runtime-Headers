/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, UIView, NSString;

@interface PXPhotosGridPromptHeaderView : UICollectionReusableView {

	UILabel* _titleLabel;
	UIView* _separatorView;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
+(CGSize)_instanceLayoutSubviews:(id)arg1 forTitle:(id)arg2 inBounds:(CGRect)arg3 ;
+(id)_newTitleLabel;
+(CGSize)sizeThatFits:(CGSize)arg1 forTitle:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
@end

