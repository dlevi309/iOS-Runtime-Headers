/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMContext.h>

@class PXCMMPhotoKitActionManager, PHMomentShare, PHSuggestion;

@interface PXCMMPhotoKitContext : PXCMMContext {

	PXCMMPhotoKitActionManager* _photoKitActionManager;
	PHMomentShare* _momentShare;
	PHSuggestion* _suggestion;
	PHMomentShare* _originatingMomentShare;

}

@property (nonatomic,readonly) PHMomentShare * momentShare;                       //@synthesize momentShare=_momentShare - In the implementation block
@property (nonatomic,readonly) PHSuggestion * suggestion;                         //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) PHMomentShare * originatingMomentShare;              //@synthesize originatingMomentShare=_originatingMomentShare - In the implementation block
-(id)createSession;
-(id)initWithAssets:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 ;
-(id)initWithAssetCollection:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 ;
-(id)initWithAssetCollection:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4 ;
-(void)setOriginatingMomentShare:(PHMomentShare *)arg1 ;
-(id)initWithFetchResult:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 ;
-(id)initWithFetchResult:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4 ;
-(id)initWithFetchResult:(id)arg1 library:(id)arg2 activityType:(unsigned long long)arg3 sourceType:(unsigned long long)arg4 optionalPeopleFetchResult:(id)arg5 ;
-(id)initWithMomentShare:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 ;
-(id)initWithSuggestion:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4 ;
-(PHSuggestion *)suggestion;
-(PHMomentShare *)originatingMomentShare;
-(id)actionManager;
-(id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3 ;
-(PHMomentShare *)momentShare;
@end

