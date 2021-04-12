/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PUAssetPickerAsyncImageCell.h>
#import <libobjc.A.dylib/PUAssetPickerAsyncCountCell.h>

@class NSUUID, UILabel, UIImageView, PXUIOverlayBadgesView, UIView, UIStackView, NSString;

@interface PUAssetPickerAssetCollectionGridCell : UICollectionViewCell <PUAssetPickerAsyncImageCell, PUAssetPickerAsyncCountCell> {

	int _imageRequestID;
	NSUUID* _asyncRequestID;
	UIImageView* _imageView;
	UILabel* _countLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PXUIOverlayBadgesView* _badgesView;
	UIView* _highlightView;
	UIView* _badgesBackgroundView;
	UIStackView* _stackView;

}

@property (nonatomic,readonly) UIView * highlightView;                          //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,readonly) UIView * badgesBackgroundView;                   //@synthesize badgesBackgroundView=_badgesBackgroundView - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                         //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) PXUIOverlayBadgesView * badgesView;              //@synthesize badgesView=_badgesView - In the implementation block
@property (nonatomic,retain) NSUUID * asyncRequestID;                           //@synthesize asyncRequestID=_asyncRequestID - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) int imageRequestID;                                //@synthesize imageRequestID=_imageRequestID - In the implementation block
@property (nonatomic,readonly) CGSize imageRequestSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UILabel * countLabel;                            //@synthesize countLabel=_countLabel - In the implementation block
+(id)identifier;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)highlightView;
-(UIImageView *)imageView;
-(UIStackView *)stackView;
-(PXUIOverlayBadgesView *)badgesView;
-(UILabel *)subtitleLabel;
-(NSUUID *)asyncRequestID;
-(void)setAsyncRequestID:(NSUUID *)arg1 ;
-(int)imageRequestID;
-(void)setImageRequestID:(int)arg1 ;
-(CGSize)imageRequestSize;
-(UIView *)badgesBackgroundView;
-(UILabel *)countLabel;
-(void)setHighlighted:(BOOL)arg1 ;
@end

