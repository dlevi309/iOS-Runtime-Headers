/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSDictionary, NURenderTagGroup;

@interface NURenderPipelineState : NSObject <NSCopying> {

	NSMutableArray* _groupStack;
	long long _serialNumber;
	long long _evaluationMode;
	long long _mediaComponentType;
	long long _auxiliaryImageType;
	long long _sampleMode;
	long long _roundingPolicy;
	NSArray* _pipelineFilters;
	NSDictionary* _videoFrames;
	NURenderTagGroup* _rootGroup;
	NURenderTagGroup* _currentGroup;
	unsigned long long _groupCount;
	SCD_Struct_NU7 _scale;
	SCD_Struct_NU6 _time;

}

@property (readonly) long long serialNumber;                        //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign) long long evaluationMode;                        //@synthesize evaluationMode=_evaluationMode - In the implementation block
@property (assign) long long mediaComponentType;                    //@synthesize mediaComponentType=_mediaComponentType - In the implementation block
@property (assign) long long auxiliaryImageType;                    //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
@property (assign) SCD_Struct_NU6 time;                             //@synthesize time=_time - In the implementation block
@property (assign) long long sampleMode;                            //@synthesize sampleMode=_sampleMode - In the implementation block
@property (assign) SCD_Struct_NU7 scale;                            //@synthesize scale=_scale - In the implementation block
@property (assign) long long roundingPolicy;                        //@synthesize roundingPolicy=_roundingPolicy - In the implementation block
@property (nonatomic,copy) NSArray * pipelineFilters;               //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
@property (nonatomic,copy) NSDictionary * videoFrames;              //@synthesize videoFrames=_videoFrames - In the implementation block
@property (readonly) NURenderTagGroup * rootGroup;                  //@synthesize rootGroup=_rootGroup - In the implementation block
@property (readonly) NURenderTagGroup * currentGroup;               //@synthesize currentGroup=_currentGroup - In the implementation block
@property (readonly) unsigned long long groupCount;                 //@synthesize groupCount=_groupCount - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_NU7)scale;
-(SCD_Struct_NU6)time;
-(void)setScale:(SCD_Struct_NU7)arg1 ;
-(void)setTime:(SCD_Struct_NU6)arg1 ;
-(long long)serialNumber;
-(NURenderTagGroup *)rootGroup;
-(long long)auxiliaryImageType;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(unsigned long long)groupCount;
-(NSArray *)pipelineFilters;
-(void)setSampleMode:(long long)arg1 ;
-(long long)mediaComponentType;
-(void)setAuxiliaryImageType:(long long)arg1 ;
-(void)resetRenderTagGroups;
-(id)initForCopy;
-(id)beginGroupWithName:(id)arg1 error:(out id*)arg2 ;
-(BOOL)endGroupWithName:(id)arg1 error:(out id*)arg2 ;
-(BOOL)applyPipelineSettings:(id)arg1 error:(out id*)arg2 ;
-(id)pipelineSettingsFromSourceSettings:(id)arg1 ;
-(long long)evaluationMode;
-(void)setEvaluationMode:(long long)arg1 ;
-(void)setMediaComponentType:(long long)arg1 ;
-(long long)sampleMode;
-(long long)roundingPolicy;
-(void)setRoundingPolicy:(long long)arg1 ;
-(NSDictionary *)videoFrames;
-(void)setVideoFrames:(NSDictionary *)arg1 ;
-(NURenderTagGroup *)currentGroup;
@end

