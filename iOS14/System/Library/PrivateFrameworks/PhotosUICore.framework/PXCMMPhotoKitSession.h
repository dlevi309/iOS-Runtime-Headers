/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMSession.h>

@class PXPhotoKitImportStatusManager, PXPhotoKitMomentShareStatus, NSString, PHMomentShare, PHSuggestion, PHAsset, PXPhotoKitAssetsDataSourceManager;

@interface PXCMMPhotoKitSession : PXCMMSession {

	PXPhotoKitImportStatusManager* _importStatusManager;
	PXPhotoKitMomentShareStatus* _photoKitMomentShareStatus;
	NSString* _photoKitImportSessionID;
	PHMomentShare* _momentShare;
	PHSuggestion* _suggestion;
	PHMomentShare* _originatingMomentShare;
	PHAsset* _anchorAsset;

}

@property (nonatomic,readonly) PHMomentShare * momentShare;                                        //@synthesize momentShare=_momentShare - In the implementation block
@property (nonatomic,readonly) PHSuggestion * suggestion;                                          //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) PHMomentShare * originatingMomentShare;                             //@synthesize originatingMomentShare=_originatingMomentShare - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * dataSourceManager; 
@property (assign,nonatomic,__weak) PHAsset * anchorAsset;                                         //@synthesize anchorAsset=_anchorAsset - In the implementation block
-(id)diagnosticDictionary;
-(id)importSessionID;
-(id)initWithContext:(id)arg1 ;
-(PHSuggestion *)suggestion;
-(id)notificationSuppressionContexts;
-(id)momentShareStatus;
-(PHMomentShare *)originatingMomentShare;
-(id)description;
-(PHAsset *)anchorAsset;
-(id)initWithPhotoKitContext:(id)arg1 ;
-(void)setAnchorAsset:(PHAsset *)arg1 ;
-(PHMomentShare *)momentShare;
-(id)importStatusManager;
@end

