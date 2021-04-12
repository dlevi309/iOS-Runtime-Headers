/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, NSString, NSUUID, UILabel;

@interface AVTStickerRecentsStickerCollectionViewCell : UICollectionViewCell {

	BOOL _showPrereleaseSticker;
	UIImageView* _imageView;
	NSString* _title;
	NSUUID* _displaySessionUUID;
	UILabel* _prereleaseLabel;

}

@property (nonatomic,readonly) UILabel * prereleaseLabel;              //@synthesize prereleaseLabel=_prereleaseLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;              //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (assign,nonatomic) BOOL showPrereleaseSticker;               //@synthesize showPrereleaseSticker=_showPrereleaseSticker - In the implementation block
+(id)identifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(CGRect)contentBounds;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(void)updateWithImage:(id)arg1 ;
-(BOOL)showPrereleaseSticker;
-(void)setShowPrereleaseSticker:(BOOL)arg1 ;
-(void)setupPrereleaseLabelIfNeeded;
-(UILabel *)prereleaseLabel;
-(void)updateWithDefaultImage;
@end

