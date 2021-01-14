/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class PXPersonImageRequest, PXRoundedCornerOverlayView, UIView, UIImageView, UIImage;

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell {

	BOOL _confirmed;
	BOOL _isMergeCandidate;
	BOOL _isVerified;
	unsigned long long _presentationStatus;
	PXPersonImageRequest* _imageRequest;
	PXRoundedCornerOverlayView* _roundCornerOverlay;
	UIView* _selectedCheckmarkView;
	UIView* _unselectedCheckmarkView;
	UIImageView* _badgeView;
	UIImageView* _imageView;
	CGSize _checkmarkImageSize;

}

@property (nonatomic,readonly) PXRoundedCornerOverlayView * roundCornerOverlay;              //@synthesize roundCornerOverlay=_roundCornerOverlay - In the implementation block
@property (nonatomic,readonly) UIView * selectedCheckmarkView;                               //@synthesize selectedCheckmarkView=_selectedCheckmarkView - In the implementation block
@property (nonatomic,readonly) UIView * unselectedCheckmarkView;                             //@synthesize unselectedCheckmarkView=_unselectedCheckmarkView - In the implementation block
@property (nonatomic,readonly) UIImageView * badgeView;                                      //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) CGSize checkmarkImageSize;                                    //@synthesize checkmarkImageSize=_checkmarkImageSize - In the implementation block
@property (assign,nonatomic) BOOL confirmed;                                                 //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,nonatomic) unsigned long long presentationStatus;                          //@synthesize presentationStatus=_presentationStatus - In the implementation block
@property (nonatomic,retain) PXPersonImageRequest * imageRequest;                            //@synthesize imageRequest=_imageRequest - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL isMergeCandidate;                                          //@synthesize isMergeCandidate=_isMergeCandidate - In the implementation block
@property (assign,nonatomic) BOOL isVerified;                                                //@synthesize isVerified=_isVerified - In the implementation block
+(id)cloudErrorBadgeImage;
-(UIImageView *)badgeView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isVerified;
-(BOOL)_isRTL;
-(UIImageView *)imageView;
-(PXRoundedCornerOverlayView *)roundCornerOverlay;
-(void)prepareForReuse;
-(void)setIsVerified:(BOOL)arg1 ;
-(UIImage *)image;
-(BOOL)confirmed;
-(PXPersonImageRequest *)imageRequest;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPresentationStatus:(unsigned long long)arg1 ;
-(void)setIsMergeCandidate:(BOOL)arg1 ;
-(void)_updateCellSizing;
-(unsigned long long)presentationStatus;
-(BOOL)isMergeCandidate;
-(UIView *)selectedCheckmarkView;
-(UIView *)unselectedCheckmarkView;
-(CGSize)checkmarkImageSize;
-(void)setImageRequest:(PXPersonImageRequest *)arg1 ;
-(void)setConfirmed:(BOOL)arg1 ;
@end

