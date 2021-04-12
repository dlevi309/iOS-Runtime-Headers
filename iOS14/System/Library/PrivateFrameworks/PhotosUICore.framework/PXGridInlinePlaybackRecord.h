/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXMediaProvider, NSString;

@interface PXGridInlinePlaybackRecord : NSObject {

	BOOL _isInvalid;
	float _videoScore;
	float _curationScore;
	id<PXDisplayAsset> _displayAsset;
	PXMediaProvider* _mediaProvider;
	id _geometryReference;
	long long _desiredPlayState;
	long long _visibilityScore;
	double _distanceToCenterScore;
	double _cellSizeScore;
	NSString* _diagnosticLog;
	SCD_Struct_PX9 _bestVideoTimeRange;

}

@property (assign,nonatomic) long long visibilityScore;                        //@synthesize visibilityScore=_visibilityScore - In the implementation block
@property (assign,nonatomic) double distanceToCenterScore;                     //@synthesize distanceToCenterScore=_distanceToCenterScore - In the implementation block
@property (assign,nonatomic) double cellSizeScore;                             //@synthesize cellSizeScore=_cellSizeScore - In the implementation block
@property (assign,nonatomic) BOOL isInvalid;                                   //@synthesize isInvalid=_isInvalid - In the implementation block
@property (copy,readonly) NSString * diagnosticScoresDescription; 
@property (copy) NSString * diagnosticLog;                                     //@synthesize diagnosticLog=_diagnosticLog - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> displayAsset;                //@synthesize displayAsset=_displayAsset - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) id geometryReference;                           //@synthesize geometryReference=_geometryReference - In the implementation block
@property (assign,nonatomic) long long desiredPlayState;                       //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) SCD_Struct_PX9 bestVideoTimeRange;              //@synthesize bestVideoTimeRange=_bestVideoTimeRange - In the implementation block
@property (nonatomic,readonly) float videoScore;                               //@synthesize videoScore=_videoScore - In the implementation block
@property (nonatomic,readonly) float curationScore;                            //@synthesize curationScore=_curationScore - In the implementation block
-(float)videoScore;
-(SCD_Struct_PX9)bestVideoTimeRange;
-(PXMediaProvider *)mediaProvider;
-(BOOL)isPlaying;
-(NSString *)diagnosticScoresDescription;
-(id)geometryReference;
-(void)setIsInvalid:(BOOL)arg1 ;
-(BOOL)isInvalid;
-(void)setDesiredPlayState:(long long)arg1 ;
-(long long)desiredPlayState;
-(float)curationScore;
-(id)description;
-(void)prepareForVisible;
-(void)prepareForInvisible;
-(id<PXDisplayAsset>)displayAsset;
-(void)setDiagnosticLog:(NSString *)arg1 ;
-(NSString *)diagnosticLog;
-(void)setCellSizeScore:(double)arg1 ;
-(void)setDistanceToCenterScore:(double)arg1 ;
-(void)setVisibilityScore:(long long)arg1 ;
-(double)distanceToCenterScore;
-(double)cellSizeScore;
-(long long)visibilityScore;
-(id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 ;
@end

