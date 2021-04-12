/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMClipProviderDelegate, PMRelatedClipsDelegate, VEKClipProtocol;
#import <Memories/Memories-Structs.h>
@class VEKProduction, VEKSuggestion, AVAsset, PHImageManager, PHAsset;

@interface PMClipProvider : NSObject {

	id<PMClipProviderDelegate> _delegate;
	id<PMRelatedClipsDelegate> _relatedClipsDelegate;
	id<VEKClipProtocol> _clip;
	VEKProduction* _production;
	VEKSuggestion* _suggestion;
	double _projectDuration;
	AVAsset* _avAsset;
	id<VEKClipProtocol> _introTransition;
	id<VEKClipProtocol> _outroTransition;
	SCD_Struct_PM6 _trimTimeRange;

}

@property (nonatomic,retain) id<VEKClipProtocol> clip;                                            //@synthesize clip=_clip - In the implementation block
@property (nonatomic,retain) VEKProduction * production;                                          //@synthesize production=_production - In the implementation block
@property (assign,nonatomic) double projectDuration;                                              //@synthesize projectDuration=_projectDuration - In the implementation block
@property (nonatomic,readonly) PHImageManager * imageManager; 
@property (nonatomic,retain) AVAsset * avAsset;                                                   //@synthesize avAsset=_avAsset - In the implementation block
@property (nonatomic,retain) id<VEKClipProtocol> introTransition;                                 //@synthesize introTransition=_introTransition - In the implementation block
@property (nonatomic,retain) id<VEKClipProtocol> outroTransition;                                 //@synthesize outroTransition=_outroTransition - In the implementation block
@property (assign,nonatomic) SCD_Struct_PM6 trimTimeRange;                                        //@synthesize trimTimeRange=_trimTimeRange - In the implementation block
@property (assign,nonatomic,__weak) id<PMClipProviderDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PMRelatedClipsDelegate> relatedClipsDelegate;              //@synthesize relatedClipsDelegate=_relatedClipsDelegate - In the implementation block
@property (nonatomic,retain) VEKSuggestion * suggestion;                                          //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) PHAsset * phAsset; 
@property (nonatomic,readonly) double maxDuration; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) BOOL trimmable; 
@property (assign,nonatomic) long long usage; 
@property (assign,nonatomic) long long volume; 
@property (assign,nonatomic) long long specialTreatment; 
@property (assign,nonatomic) double reorderTimeOffset; 
@property (nonatomic,readonly) SCD_Struct_PM6 suggestionTrimTimeRange; 
+(id)getThumbnailQueue;
-(id)description;
-(id<PMClipProviderDelegate>)delegate;
-(void)setDelegate:(id<PMClipProviderDelegate>)arg1 ;
-(void)setUsage:(long long)arg1 ;
-(long long)usage;
-(double)aspectRatio;
-(id<VEKClipProtocol>)clip;
-(long long)volume;
-(void)setVolume:(long long)arg1 ;
-(void)setSuggestion:(VEKSuggestion *)arg1 ;
-(double)maxDuration;
-(VEKSuggestion *)suggestion;
-(void)requestAVAssetWithResultHandler:(/*^block*/id)arg1 ;
-(void)requestPlayerItemWithResultHandler:(/*^block*/id)arg1 ;
-(PHImageManager *)imageManager;
-(AVAsset *)avAsset;
-(void)setClip:(id<VEKClipProtocol>)arg1 ;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(void)setTrimTimeRange:(SCD_Struct_PM6)arg1 ;
-(SCD_Struct_PM6)trimTimeRange;
-(PHAsset *)phAsset;
-(void)setAvAsset:(AVAsset *)arg1 ;
-(id<PMRelatedClipsDelegate>)relatedClipsDelegate;
-(void)setProjectDuration:(double)arg1 ;
-(void)setIntroTransition:(id<VEKClipProtocol>)arg1 ;
-(id<VEKClipProtocol>)introTransition;
-(void)setOutroTransition:(id<VEKClipProtocol>)arg1 ;
-(id<VEKClipProtocol>)outroTransition;
-(long long)specialTreatment;
-(void)createSuggestionIfNeeded;
-(void)setSpecialTreatment:(long long)arg1 ;
-(double)reorderTimeOffset;
-(void)setReorderTimeOffset:(double)arg1 ;
-(BOOL)shouldTrimToProposedTimeRange:(SCD_Struct_PM6)arg1 ;
-(double)projectDuration;
-(void)replaceSuggestionWithSuggestion:(id)arg1 ;
-(SCD_Struct_PM6)suggestionTrimTimeRange;
-(void)addSuggestionToProduction;
-(id)suggestionsForAsset:(id)arg1 ;
-(id)createSlomoComposition:(id)arg1 ;
-(id)initWithClip:(id)arg1 production:(id)arg2 result:(id)arg3 ;
-(BOOL)trimmable;
-(BOOL)trimToTimeRange:(SCD_Struct_PM6)arg1 ;
-(void)requestStillImageForSize:(CGSize)arg1 atTime:(SCD_Struct_PM5)arg2 withResultHandler:(/*^block*/id)arg3 ;
-(void)setRelatedClipsDelegate:(id<PMRelatedClipsDelegate>)arg1 ;
@end

