/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/MFReusableIdentifiable.h>

@class NSString, UIImage, UIImageView, MFRoundProgressView;

@interface MFPhotoPickerCell : UICollectionViewCell <MFReusableIdentifiable> {

	NSString* _representedAssetIdentifier;
	UIImage* _thumbnailImage;
	long long _mediaType;
	UIImageView* _imageView;
	UIImageView* _mediaTypeBadgeView;
	UIImageView* _selectedBadgeView;
	MFRoundProgressView* _progressView;

}

@property (nonatomic,retain) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * mediaTypeBadgeView;                 //@synthesize mediaTypeBadgeView=_mediaTypeBadgeView - In the implementation block
@property (nonatomic,retain) UIImageView * selectedBadgeView;                  //@synthesize selectedBadgeView=_selectedBadgeView - In the implementation block
@property (nonatomic,retain) MFRoundProgressView * progressView;               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,copy) NSString * representedAssetIdentifier;              //@synthesize representedAssetIdentifier=_representedAssetIdentifier - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                         //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reusableIdentifier;
-(void)prepareForReuse;
-(long long)mediaType;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(MFRoundProgressView *)progressView;
-(void)setProgressView:(MFRoundProgressView *)arg1 ;
-(UIImageView *)mediaTypeBadgeView;
-(UIImageView *)selectedBadgeView;
-(void)resetProgress;
-(NSString *)representedAssetIdentifier;
-(void)setRepresentedAssetIdentifier:(NSString *)arg1 ;
-(void)setMediaTypeBadgeView:(UIImageView *)arg1 ;
-(void)setSelectedBadgeView:(UIImageView *)arg1 ;
@end

