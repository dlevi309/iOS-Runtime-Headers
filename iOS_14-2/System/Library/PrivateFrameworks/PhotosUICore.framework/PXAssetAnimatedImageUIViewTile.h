/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXAssetTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXAutoplayTile.h>

@class ISAnimatedImageView, PXImageRequester, PHAnimatedImage, NSString, UIView;

@interface PXAssetAnimatedImageUIViewTile : NSObject <PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile> {

	ISAnimatedImageView* _animatedImageView;
	long long _animatedImageRequestID;
	unsigned long long _requestCount;
	PXImageRequester* _imageRequester;
	double _cornerRadius;
	long long _desiredPlayState;
	PHAnimatedImage* __animatedImage;
	SCD_Struct_PX9 _bestPlaybackTimeRange;

}

@property (setter=_setAnimatedImage:,nonatomic,retain) PHAnimatedImage * _animatedImage;              //@synthesize _animatedImage=__animatedImage - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                                       //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                     //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) long long desiredPlayState;                                              //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX9 bestPlaybackTimeRange;                                    //@synthesize bestPlaybackTimeRange=_bestPlaybackTimeRange - In the implementation block
-(void)becomeReusable;
-(PHAnimatedImage *)_animatedImage;
-(id)init;
-(void)setDesiredPlayState:(long long)arg1 ;
-(long long)desiredPlayState;
-(void)prepareForReuse;
-(SCD_Struct_PX9)bestPlaybackTimeRange;
-(void)setBestPlaybackTimeRange:(SCD_Struct_PX9)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(double)cornerRadius;
-(void)_setAnimatedImage:(id)arg1 ;
-(UIView *)view;
-(void)_updateAnimatedImageView;
-(void)_requestAnimatedImageIfNeeded;
-(void)_handleAnimatedImageResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3 ;
-(void)setCornerRadius:(double)arg1 ;
@end

