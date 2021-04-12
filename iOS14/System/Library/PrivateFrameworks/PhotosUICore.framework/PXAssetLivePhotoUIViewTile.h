/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXAssetTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class ISLivePhotoUIView, ISLivePhotoPlayer, PXImageRequester, ISPlayerItem, NSString, UIView;

@interface PXAssetLivePhotoUIViewTile : NSObject <PXReusableObject, PXAssetTile, PXUIViewBasicTile> {

	unsigned long long _requestCount;
	long long _livePhotoRequestID;
	ISLivePhotoUIView* _livePhotoView;
	ISLivePhotoPlayer* _livePhotoPlayer;
	PXImageRequester* _imageRequester;
	double _cornerRadius;
	ISPlayerItem* __playerItem;

}

@property (setter=_setPlayerItem:,nonatomic,retain) ISPlayerItem * _playerItem;              //@synthesize _playerItem=__playerItem - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                              //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(void)becomeReusable;
-(CGSize)_targetSize;
-(ISPlayerItem *)_playerItem;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(double)cornerRadius;
-(UIView *)view;
-(void)_requestLivePhotoIfNeeded;
-(void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3 expectedRequestID:(long long)arg4 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)_updateLivePhotoView;
-(void)_setPlayerItem:(id)arg1 ;
@end

