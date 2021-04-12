/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/AVVideoCompositionInstruction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary, NURenderJob, NURenderContext, NUComposition, NUColorSpace, NSString;

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {

	NSMutableDictionary* _sourceIdentifiersByTrackID;
	NSArray* _requiredSourceTrackIDs;
	NURenderJob* _renderJob;
	NURenderContext* _renderContext;
	NUComposition* _adjustmentComposition;
	NSArray* _pipelineFilters;
	NUColorSpace* _colorSpace;
	long long _sampleMode;
	SCD_Struct_NU7 _renderScale;
	SCD_Struct_NU14 _timeRange;

}

@property (assign,nonatomic) SCD_Struct_NU14 timeRange;                          //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSArray * requiredSourceTrackIDs;                   //@synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs - In the implementation block
@property (assign,nonatomic,__weak) NURenderJob * renderJob;                     //@synthesize renderJob=_renderJob - In the implementation block
@property (retain) NURenderContext * renderContext;                              //@synthesize renderContext=_renderContext - In the implementation block
@property (nonatomic,retain) NUComposition * adjustmentComposition;              //@synthesize adjustmentComposition=_adjustmentComposition - In the implementation block
@property (nonatomic,retain) NSArray * pipelineFilters;                          //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU7 renderScale;                         //@synthesize renderScale=_renderScale - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                          //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) long long sampleMode;                               //@synthesize sampleMode=_sampleMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) int passthroughTrackID; 
+(id)instructionForVideoTrack:(id)arg1 ;
+(id)instructionFromBase:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(void)setTimeRange:(SCD_Struct_NU14)arg1 ;
-(SCD_Struct_NU14)timeRange;
-(NURenderContext *)renderContext;
-(SCD_Struct_NU7)renderScale;
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;
-(void)setRenderScale:(SCD_Struct_NU7)arg1 ;
-(void)setRenderContext:(NURenderContext *)arg1 ;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(NSArray *)pipelineFilters;
-(void)setSampleMode:(long long)arg1 ;
-(long long)sampleMode;
-(void)setSourceIdentifier:(id)arg1 forTrackID:(id)arg2 ;
-(id)sourceIdentifierForTrackID:(id)arg1 ;
-(BOOL)isEqualToInstruction:(id)arg1 ;
-(void)setRequiredSourceTrackIDs:(NSArray *)arg1 ;
-(NURenderJob *)renderJob;
-(void)setRenderJob:(NURenderJob *)arg1 ;
-(NUComposition *)adjustmentComposition;
-(void)setAdjustmentComposition:(NUComposition *)arg1 ;
@end

