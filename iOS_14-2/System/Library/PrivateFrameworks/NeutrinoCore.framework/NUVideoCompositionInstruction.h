/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/AVVideoCompositionInstruction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary, NURenderJob, NSString, NURenderContext, NUComposition, NUColorSpace;

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {

	NSMutableDictionary* _sourceIdentifiersByTrackID;
	NSArray* _requiredSourceTrackIDs;
	NURenderJob* _renderJob;
	NSString* _name;
	NURenderContext* _renderContext;
	NUComposition* _adjustmentComposition;
	NSArray* _pipelineFilters;
	NUColorSpace* _colorSpace;
	long long _sampleMode;
	SCD_Struct_NU7 _renderScale;
	SCD_Struct_NU16 _timeRange;

}

@property (assign,nonatomic) SCD_Struct_NU16 timeRange;                          //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSArray * requiredSourceTrackIDs;                   //@synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs - In the implementation block
@property (assign,nonatomic,__weak) NURenderJob * renderJob;                     //@synthesize renderJob=_renderJob - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (retain) NURenderContext * renderContext;                              //@synthesize renderContext=_renderContext - In the implementation block
@property (nonatomic,retain) NUComposition * adjustmentComposition;              //@synthesize adjustmentComposition=_adjustmentComposition - In the implementation block
@property (nonatomic,retain) NSArray * pipelineFilters;                          //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU7 renderScale;                         //@synthesize renderScale=_renderScale - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                          //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) long long sampleMode;                               //@synthesize sampleMode=_sampleMode - In the implementation block
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) int passthroughTrackID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instructionForVideoTrack:(id)arg1 ;
+(id)instructionFromBase:(id)arg1 ;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)setSampleMode:(long long)arg1 ;
-(NSArray *)pipelineFilters;
-(id)init;
-(BOOL)enablePostProcessing;
-(void)setTimeRange:(SCD_Struct_NU16)arg1 ;
-(NSArray *)requiredSourceTrackIDs;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(void)setRenderScale:(SCD_Struct_NU7)arg1 ;
-(SCD_Struct_NU16)timeRange;
-(NSString *)name;
-(void)setRenderContext:(NURenderContext *)arg1 ;
-(NURenderContext *)renderContext;
-(SCD_Struct_NU7)renderScale;
-(unsigned long long)hash;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
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

