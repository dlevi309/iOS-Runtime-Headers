/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUDisplayAsset;
#import <PhotosUI/PhotosUI-Structs.h>
@class PUMediaProvider, NSArray, UIImage, NSData, NSURL, NSHashTable, PUImageRequesterChange;

@interface PUImageRequester : NSObject {

	BOOL _shouldRequestPenultimateVersion;
	BOOL _useLowMemoryMode;
	BOOL _networkAccessAllowed;
	BOOL _requiresFullQualityImage;
	BOOL _imageIsFullQuality;
	BOOL _includeGainMap;
	BOOL _imageIsPlaceholder;
	BOOL __needsUpdate;
	BOOL __hasRequestedFullsizeImageData;
	BOOL __hasCurrentIncompleteRequest;
	BOOL __shouldUpdateImageOnCurrentRequestCompletion;
	float _gainMapValue;
	int __currentFullsizeImageDataRequestID;
	int __currentImageRequestID;
	PUMediaProvider* _mediaProvider;
	id<PUDisplayAsset> _asset;
	NSArray* _requestFullSizeImageDataUTTypes;
	UIImage* _image;
	NSData* _fullsizeImageData;
	NSURL* _fullsizeImageURL;
	CGImageRef _gainMapImage;
	NSHashTable* __observers;
	long long __changeCount;
	PUImageRequesterChange* __currentChange;
	CGSize _targetSize;
	CGSize __lastRequestedImageSize;

}

@property (setter=_setImage:,nonatomic,retain) UIImage * image;                                                                                      //@synthesize image=_image - In the implementation block
@property (setter=_setFullsizeImageData:,nonatomic,retain) NSData * fullsizeImageData;                                                               //@synthesize fullsizeImageData=_fullsizeImageData - In the implementation block
@property (setter=_setFullsizeImageURL:,nonatomic,retain) NSURL * fullsizeImageURL;                                                                  //@synthesize fullsizeImageURL=_fullsizeImageURL - In the implementation block
@property (assign,setter=_setImageIsPlaceholder:,nonatomic) BOOL imageIsPlaceholder;                                                                 //@synthesize imageIsPlaceholder=_imageIsPlaceholder - In the implementation block
@property (assign,setter=_setImageIsFullQuality:,nonatomic) BOOL imageIsFullQuality;                                                                 //@synthesize imageIsFullQuality=_imageIsFullQuality - In the implementation block
@property (setter=_setGainMapImage:,nonatomic,retain) CGImageRef gainMapImage;                                                                       //@synthesize gainMapImage=_gainMapImage - In the implementation block
@property (assign,setter=_setGainMapValue:,nonatomic) float gainMapValue;                                                                            //@synthesize gainMapValue=_gainMapValue - In the implementation block
@property (setter=_setObserver:,nonatomic,retain) NSHashTable * _observers;                                                                          //@synthesize _observers=__observers - In the implementation block
@property (assign,setter=_setChangeCount:,nonatomic) long long _changeCount;                                                                         //@synthesize _changeCount=__changeCount - In the implementation block
@property (setter=_setCurrentChange:,nonatomic,retain) PUImageRequesterChange * _currentChange;                                                      //@synthesize _currentChange=__currentChange - In the implementation block
@property (assign,setter=_setNeedsUpdate:,nonatomic) BOOL _needsUpdate;                                                                              //@synthesize _needsUpdate=__needsUpdate - In the implementation block
@property (assign,setter=_setHasRequestedFullsizeImageData:,nonatomic) BOOL _hasRequestedFullsizeImageData;                                          //@synthesize _hasRequestedFullsizeImageData=__hasRequestedFullsizeImageData - In the implementation block
@property (assign,setter=_setCurrentFullsizeImageDataRequestID:,nonatomic) int _currentFullsizeImageDataRequestID;                                   //@synthesize _currentFullsizeImageDataRequestID=__currentFullsizeImageDataRequestID - In the implementation block
@property (assign,setter=_setCurrentIncompleteRequest:,nonatomic) BOOL _hasCurrentIncompleteRequest;                                                 //@synthesize _hasCurrentIncompleteRequest=__hasCurrentIncompleteRequest - In the implementation block
@property (assign,setter=_setLastRequestedImageSize:,nonatomic) CGSize _lastRequestedImageSize;                                                      //@synthesize _lastRequestedImageSize=__lastRequestedImageSize - In the implementation block
@property (assign,setter=_setCurrentImageRequestID:,nonatomic) int _currentImageRequestID;                                                           //@synthesize _currentImageRequestID=__currentImageRequestID - In the implementation block
@property (assign,setter=_setShouldUpdateImageOnCurrentRequestCompletion:,nonatomic) BOOL _shouldUpdateImageOnCurrentRequestCompletion;              //@synthesize _shouldUpdateImageOnCurrentRequestCompletion=__shouldUpdateImageOnCurrentRequestCompletion - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * mediaProvider;                                                                                      //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) id<PUDisplayAsset> asset;                                                                                             //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                                                                                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestPenultimateVersion;                                                                                   //@synthesize shouldRequestPenultimateVersion=_shouldRequestPenultimateVersion - In the implementation block
@property (assign,nonatomic) BOOL useLowMemoryMode;                                                                                                  //@synthesize useLowMemoryMode=_useLowMemoryMode - In the implementation block
@property (nonatomic,retain) NSArray * requestFullSizeImageDataUTTypes;                                                                              //@synthesize requestFullSizeImageDataUTTypes=_requestFullSizeImageDataUTTypes - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;                                                                //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,readonly) BOOL requiresFullQualityImage;                                                                                        //@synthesize requiresFullQualityImage=_requiresFullQualityImage - In the implementation block
@property (assign,nonatomic) BOOL includeGainMap;                                                                                                    //@synthesize includeGainMap=_includeGainMap - In the implementation block
-(void)unregisterObserver:(id)arg1 ;
-(CGSize)targetSize;
-(void)_setFullsizeImageData:(id)arg1 ;
-(void)setAsset:(id<PUDisplayAsset>)arg1 ;
-(PUMediaProvider *)mediaProvider;
-(void)_setFullsizeImageURL:(id)arg1 ;
-(BOOL)imageIsFullQuality;
-(CGImageRef)gainMapImage;
-(float)gainMapValue;
-(BOOL)requiresFullQualityImage;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)_setCurrentImageRequestID:(int)arg1 ;
-(void)_setChangeCount:(long long)arg1 ;
-(void)_setHasRequestedFullsizeImageData:(BOOL)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(NSData *)fullsizeImageData;
-(id)init;
-(void)_handleResultOfImageRequestWithID:(int)arg1 image:(id)arg2 info:(id)arg3 ;
-(int)_currentImageRequestID;
-(NSHashTable *)_observers;
-(id<PUDisplayAsset>)asset;
-(void)_publishChange:(id)arg1 ;
-(long long)_changeCount;
-(void)cancelAllImageRequests;
-(int)_currentFullsizeImageDataRequestID;
-(void)_setShouldUpdateImageOnCurrentRequestCompletion:(BOOL)arg1 ;
-(PUImageRequesterChange *)_currentChange;
-(void)_setGainMapImage:(CGImageRef)arg1 ;
-(void)handlePreloadedImage:(id)arg1 ;
-(NSURL *)fullsizeImageURL;
-(void)_setGainMapValue:(float)arg1 ;
-(void)_setImageIsPlaceholder:(BOOL)arg1 ;
-(id)initWithMediaProvider:(id)arg1 asset:(id)arg2 requiresFullQualityImage:(BOOL)arg3 ;
-(void)_setNeedsUpdate:(BOOL)arg1 ;
-(UIImage *)image;
-(BOOL)_hasRequestedFullsizeImageData;
-(CGSize)_lastRequestedImageSize;
-(void)updateIfNeeded;
-(BOOL)shouldRequestPenultimateVersion;
-(void)_setImage:(id)arg1 ;
-(void)setRequestFullSizeImageDataUTTypes:(NSArray *)arg1 ;
-(void)_setObserver:(id)arg1 ;
-(void)_invalidateImageRequest;
-(void)_handleResultOfFullsizeImageDataRequestWithID:(int)arg1 imageData:(id)arg2 imageURL:(id)arg3 dataUTI:(id)arg4 orientation:(long long)arg5 info:(id)arg6 ;
-(BOOL)includeGainMap;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(BOOL)_shouldUpdateImageOnCurrentRequestCompletion;
-(BOOL)_needsUpdate;
-(void)_setCurrentIncompleteRequest:(BOOL)arg1 ;
-(void)_update;
-(BOOL)isNetworkAccessAllowed;
-(void)_setCurrentChange:(id)arg1 ;
-(BOOL)imageIsPlaceholder;
-(void)setShouldRequestPenultimateVersion:(BOOL)arg1 ;
-(void)_setCurrentFullsizeImageDataRequestID:(int)arg1 ;
-(void)_willChange;
-(void)setUseLowMemoryMode:(BOOL)arg1 ;
-(void)_setLastRequestedImageSize:(CGSize)arg1 ;
-(void)_didChange;
-(BOOL)_hasCurrentIncompleteRequest;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setIncludeGainMap:(BOOL)arg1 ;
-(void)_assertInsideChangesBlock;
-(BOOL)useLowMemoryMode;
-(void)dealloc;
-(void)_setImageIsFullQuality:(BOOL)arg1 ;
-(NSArray *)requestFullSizeImageDataUTTypes;
@end

