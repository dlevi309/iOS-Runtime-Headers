/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXAssetTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXAutoplayTile.h>

@class PXImageRequester, UIView, _PXAssetLoopUIView, PXVideoSession, PXVideoSessionUIView, NSString;

@interface PXAssetLoopUIViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile> {

	unsigned long long _requestCount;
	_PXAssetLoopUIView* _view;
	PXVideoSession* _videoSession;
	PXVideoSessionUIView* _videoView;
	PXImageRequester* _imageRequester;
	double _cornerRadius;
	long long _desiredPlayState;
	CGSize _contentSize;
	CGRect _desiredContentsRect;
	SCD_Struct_PX9 _bestPlaybackTimeRange;

}

@property (nonatomic,retain) PXVideoSession * videoSession;                     //@synthesize videoSession=_videoSession - In the implementation block
@property (assign,nonatomic) CGRect desiredContentsRect;                        //@synthesize desiredContentsRect=_desiredContentsRect - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                //@synthesize contentSize=_contentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXImageRequester * imageRequester;                 //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) long long desiredPlayState;                        //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX9 bestPlaybackTimeRange;              //@synthesize bestPlaybackTimeRange=_bestPlaybackTimeRange - In the implementation block
-(void)becomeReusable;
-(void)setContentSize:(CGSize)arg1 ;
-(id)init;
-(CGSize)contentSize;
-(void)setDesiredPlayState:(long long)arg1 ;
-(long long)desiredPlayState;
-(void)prepareForReuse;
-(SCD_Struct_PX9)bestPlaybackTimeRange;
-(void)setBestPlaybackTimeRange:(SCD_Struct_PX9)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)_updateLayer;
-(void)_updateImageRequester;
-(void)_reloadVideoSessionIfNecessary;
-(void)_updateDesiredDynamicRange;
-(CGRect)desiredContentsRect;
-(void)setDesiredContentsRect:(CGRect)arg1 ;
-(double)cornerRadius;
-(UIView *)view;
-(void)setVideoSession:(PXVideoSession *)arg1 ;
-(void)_updateVideoSession;
-(PXVideoSession *)videoSession;
-(void)setCornerRadius:(double)arg1 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

