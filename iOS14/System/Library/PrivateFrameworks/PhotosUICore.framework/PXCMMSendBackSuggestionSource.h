/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@protocol OS_dispatch_queue;
@class NSObject, PXAssetsDataSource, PHMomentShare, PXCMMSendBackSuggestion, PXCMMContext;

@interface PXCMMSendBackSuggestionSource : PXObservable {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	unsigned long long _sourceType;
	BOOL _hasInitiatedFetchRequest;
	BOOL _shouldShowBanner;
	PXAssetsDataSource* _assetsDataSource;
	PHMomentShare* _originatingMomentShare;
	PXCMMSendBackSuggestion* _suggestion;
	PXCMMContext* _sendBackContext;

}

@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource;               //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (nonatomic,readonly) PHMomentShare * originatingMomentShare;              //@synthesize originatingMomentShare=_originatingMomentShare - In the implementation block
@property (nonatomic,readonly) PXCMMSendBackSuggestion * suggestion;                //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) PXCMMContext * sendBackContext;                      //@synthesize sendBackContext=_sendBackContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowBanner;                               //@synthesize shouldShowBanner=_shouldShowBanner - In the implementation block
+(id)new;
+(id)sendBackContextTimeLocationMatching:(id)arg1 sourceType:(unsigned long long)arg2 ;
+(id)sendBackContextOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 sourceType:(unsigned long long)arg3 ;
+(id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)_sendBackFetchResultUsingTimeLocationMatching:(id)arg1 ;
+(id)_assetsInDateRanges:(id)arg1 ;
+(id)_filterAssets:(id)arg1 byLocations:(id)arg2 maxDistanceMeters:(double)arg3 ;
-(id)init;
-(void)startLoading;
-(PXCMMSendBackSuggestion *)suggestion;
-(id)initWithAssetsDataSource:(id)arg1 sourceType:(unsigned long long)arg2 originatingMomentShare:(id)arg3 ;
-(BOOL)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)arg1 ;
-(void)_fetchSuggestedSendBackContext;
-(id)_fetchSuggestedParticipantsForAssetCollection:(id)arg1 ;
-(void)_fetchQueue_fetchSuggestedSendBackContext;
-(void)setSendBackContext:(PXCMMContext *)arg1 ;
-(void)setShouldShowBanner:(BOOL)arg1 ;
-(id)_allMetadataAssets;
-(id)_createSendBackContext;
-(id)_sendBackFetchResultUsingPhotosGraph;
-(id)sendBackContextPhotosGraphBasedWithSourceType:(unsigned long long)arg1 ;
-(PHMomentShare *)originatingMomentShare;
-(PXCMMContext *)sendBackContext;
-(BOOL)shouldShowBanner;
-(id)mutableChangeObject;
-(void)setSuggestion:(PXCMMSendBackSuggestion *)arg1 ;
-(PXAssetsDataSource *)assetsDataSource;
-(void)performChanges:(/*^block*/id)arg1 ;
@end

