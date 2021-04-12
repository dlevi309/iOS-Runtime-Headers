/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class PFVideoAVObjectBuilder, NSDictionary, NSString;


@protocol PUEditableAsset <PUDisplayAsset>
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (getter=isHighFramerateVideo,nonatomic,readonly) BOOL highFramerateVideo; 
@property (getter=isAdjusted,nonatomic,readonly) BOOL adjusted; 
@property (getter=isContentAdjustmentAllowed,nonatomic,readonly) BOOL contentAdjustmentAllowed; 
@property (getter=isLivePhotoVisibilityAdjustmentAllowed,nonatomic,readonly) BOOL livePhotoVisibilityAdjustmentAllowed; 
@property (getter=isInPlaceVideoTrimAllowed,nonatomic,readonly) BOOL inPlaceVideoTrimAllowed; 
@property (nonatomic,readonly) unsigned long long originalResourceChoice; 
@property (getter=isTrimmableType,nonatomic,readonly) BOOL trimmableType; 
@property (nonatomic,readonly) unsigned long long livePhotoVisibilityState; 
@property (nonatomic,readonly) PFVideoAVObjectBuilder * videoObjectBuilder; 
@property (nonatomic,readonly) unsigned long long reframeVariation; 
@property (nonatomic,readonly) NSDictionary * imageProperties; 
@property (nonatomic,readonly) int originalEXIFOrientation; 
@property (getter=isResourceDownloadPossible,nonatomic,readonly) BOOL resourceDownloadPossible; 
@property (getter=isCloudPhotoLibraryEnabled,nonatomic,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (nonatomic,copy,readonly) NSString * pathForOriginalImageFile; 
@property (nonatomic,copy,readonly) NSString * pathForOriginalVideoFile; 
@property (nonatomic,copy,readonly) NSString * pathForTrimmedVideoFile; 
@required
-(unsigned long long)reframeVariation;
-(unsigned long long)originalResourceChoice;
-(BOOL)isAdjusted;
-(BOOL)isCloudPhotoLibraryEnabled;
-(BOOL)isHighFramerateVideo;
-(BOOL)isTrimmableType;
-(BOOL)isContentAdjustmentAllowed;
-(BOOL)isLivePhotoVisibilityAdjustmentAllowed;
-(BOOL)isInPlaceVideoTrimAllowed;
-(unsigned long long)livePhotoVisibilityState;
-(PFVideoAVObjectBuilder *)videoObjectBuilder;
-(int)originalEXIFOrientation;
-(BOOL)isResourceDownloadPossible;
-(NSString *)pathForOriginalImageFile;
-(NSString *)pathForOriginalVideoFile;
-(unsigned long long)mediaSubtypes;
-(BOOL)isOriginalRaw;
-(unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelContentEditingInputRequest:(unsigned long long)arg1;
-(NSString *)pathForTrimmedVideoFile;
-(NSDictionary *)imageProperties;

@end

