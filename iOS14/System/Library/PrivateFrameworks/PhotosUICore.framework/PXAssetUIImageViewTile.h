/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXAssetTile.h>
#import <libobjc.A.dylib/PXUIImageViewBasicTile.h>

@class UIImage, PXFocusableUIImageView, UIView, PXImageRequester, UIColor, NSString;

@interface PXAssetUIImageViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIImageViewBasicTile> {

	PXFocusableUIImageView* _imageView;
	UIView* _contentView;
	BOOL _hasPlaceholder;
	BOOL _shouldAllowFocus;
	PXImageRequester* _imageRequester;
	double _cornerRadius;
	UIColor* _placeholderColor;
	UIImage* _placeholderImage;
	CGSize __contentSize;
	CGRect __desiredContentsRect;

}

@property (assign,setter=_setContentSize:,nonatomic) CGSize _contentSize;                              //@synthesize _contentSize=__contentSize - In the implementation block
@property (assign,setter=_setDesiredContentsRect:,nonatomic) CGRect _desiredContentsRect;              //@synthesize _desiredContentsRect=__desiredContentsRect - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                                               //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowFocus;                                                    //@synthesize shouldAllowFocus=_shouldAllowFocus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXImageRequester * imageRequester;                                        //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIView * view; 
-(void)becomeReusable;
-(UIColor *)placeholderColor;
-(id)init;
-(void)prepareForReuse;
-(CGRect)_desiredContentsRect;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)_updateImageRequester;
-(void)imageDidChange;
-(UIImage *)image;
-(double)cornerRadius;
-(void)setShouldAllowFocus:(BOOL)arg1 ;
-(void)_setDesiredContentsRect:(CGRect)arg1 ;
-(BOOL)shouldAllowFocus;
-(CGSize)_contentSize;
-(UIView *)view;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(UIImage *)placeholderImage;
-(void)_setContentSize:(CGSize)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)_updateImageView;
-(void)setCornerRadius:(double)arg1 ;
-(void)_updateContentView;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

