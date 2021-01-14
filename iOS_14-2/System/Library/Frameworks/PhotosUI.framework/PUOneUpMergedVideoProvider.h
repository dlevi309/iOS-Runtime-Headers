/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PUBrowsingViewModel, PUMergedLivePhotosVideo, ISLivePhotoPlayer, NSError, PUMergedLivePhotosVideoRequest, NSString;

@interface PUOneUpMergedVideoProvider : PXObservable <PUBrowsingViewModelChangeObserver, PXChangeObserver> {

	PUBrowsingViewModel* _browsingViewModel;
	PUMergedLivePhotosVideo* _mergedVideo;
	ISLivePhotoPlayer* _livePhotoPlayer;
	NSError* _error;
	long long _state;
	PUMergedLivePhotosVideoRequest* _currentRequest;

}

@property (nonatomic,retain) PUMergedLivePhotosVideo * mergedVideo;                        //@synthesize mergedVideo=_mergedVideo - In the implementation block
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PUMergedLivePhotosVideoRequest * currentRequest;              //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,readonly) PUBrowsingViewModel * browsingViewModel;                    //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,readonly) ISLivePhotoPlayer * livePhotoPlayer;                        //@synthesize livePhotoPlayer=_livePhotoPlayer - In the implementation block
@property (nonatomic,readonly) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUMergedLivePhotosVideoRequest *)currentRequest;
-(ISLivePhotoPlayer *)livePhotoPlayer;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_updateLivePhotoPlayerItem;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)setMergedVideo:(PUMergedLivePhotosVideo *)arg1 ;
-(PUMergedLivePhotosVideo *)mergedVideo;
-(void)_handleRequestChanges:(id)arg1 ;
-(void)_handleViewModelChanges;
-(void)setState:(long long)arg1 ;
-(id)initWithBrowsingViewModel:(id)arg1 ;
-(void)setCurrentRequest:(PUMergedLivePhotosVideoRequest *)arg1 ;
-(long long)state;
-(id)mutableChangeObject;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

