/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImage;

@interface VideosUI.TabItemCollectionViewCell : UICollectionViewCell {

	 cardItemLayout;
	 numberOfTabs;
	 debugName;
	 titleView;
	 imageView;

}

@property (copy,nonatomic) NSString * largeContentTitle; 
@property (retain,nonatomic) UIImage * largeContentImage; 
@property (assign,nonatomic) BOOL scalesLargeContentImage; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLargeContentTitle:(NSString *)arg1 ;
-(BOOL)scalesLargeContentImage;
-(void)prepareForReuse;
-(void)setScalesLargeContentImage:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIImage *)largeContentImage;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLargeContentImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)largeContentTitle;
@end

