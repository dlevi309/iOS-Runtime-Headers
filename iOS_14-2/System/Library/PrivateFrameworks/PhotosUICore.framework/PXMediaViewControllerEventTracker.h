/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXViewControllerEventTracker.h>
#import <libobjc.A.dylib/PXMediaViewControllerEventTracker.h>

@protocol PXMediaViewControllerEventTracker <PXViewControllerEventTracker>
@property (nonatomic,retain) id<PXDisplayAsset> displayedAsset; 
@property (nonatomic,retain) id<PXDisplayAssetCollection> displayedAssetCollection; 
@required
-(id<PXDisplayAsset>)displayedAsset;
-(void)setDisplayedAsset:(id)arg1;
-(id<PXDisplayAssetCollection>)displayedAssetCollection;
-(void)setDisplayedAssetCollection:(id)arg1;

@end

#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXDisplayAsset, PXDisplayAssetCollection;
@class NSString, NSMutableDictionary;

@interface PXMediaViewControllerEventTracker : PXViewControllerEventTracker <PXMediaViewControllerEventTracker, PXChangeObserver> {

	BOOL _didInvalidateCurrentlyVisibleMediaOnce;
	NSString* _viewName;
	id<PXDisplayAsset> _displayedAsset;
	id<PXDisplayAssetCollection> _displayedAssetCollection;
	id _currentlyVisibleMedia;
	id _lastVisibleMedia;
	double _currentlyVisibleMediaTimestamp;
	long long _mediaViewedSignpost;
	long long _specificMediaViewedSignpost;

}

@property (nonatomic,retain) id currentlyVisibleMedia;                                           //@synthesize currentlyVisibleMedia=_currentlyVisibleMedia - In the implementation block
@property (nonatomic,retain) id lastVisibleMedia;                                                //@synthesize lastVisibleMedia=_lastVisibleMedia - In the implementation block
@property (nonatomic,readonly) double currentlyVisibleMediaTimestamp;                            //@synthesize currentlyVisibleMediaTimestamp=_currentlyVisibleMediaTimestamp - In the implementation block
@property (assign,nonatomic) long long mediaViewedSignpost;                                      //@synthesize mediaViewedSignpost=_mediaViewedSignpost - In the implementation block
@property (assign,nonatomic) long long specificMediaViewedSignpost;                              //@synthesize specificMediaViewedSignpost=_specificMediaViewedSignpost - In the implementation block
@property (nonatomic,readonly) NSString * viewName;                                              //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> displayedAsset;                                  //@synthesize displayedAsset=_displayedAsset - In the implementation block
@property (nonatomic,retain) id<PXDisplayAssetCollection> displayedAssetCollection;              //@synthesize displayedAssetCollection=_displayedAssetCollection - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * payload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithViewName:(id)arg1 ;
-(NSString *)viewName;
-(id<PXDisplayAsset>)displayedAsset;
-(void)setDisplayedAsset:(id<PXDisplayAsset>)arg1 ;
-(id<PXDisplayAssetCollection>)displayedAssetCollection;
-(void)setDisplayedAssetCollection:(id<PXDisplayAssetCollection>)arg1 ;
-(void)_invalidateCurrentlyVisibleMedia;
-(void)_updateCurrentlyVisibleMedia;
-(void)setCurrentlyVisibleMedia:(id)arg1 ;
-(void)_logDidStartViewingMedia:(id)arg1 ;
-(id)lastVisibleMedia;
-(void)_logDidEndViewingMedia:(id)arg1 duration:(double)arg2 ;
-(id)currentlyVisibleMedia;
-(void)setLastVisibleMedia:(id)arg1 ;
-(double)currentlyVisibleMediaTimestamp;
-(long long)mediaViewedSignpost;
-(void)setMediaViewedSignpost:(long long)arg1 ;
-(long long)specificMediaViewedSignpost;
-(void)setSpecificMediaViewedSignpost:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

