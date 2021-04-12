/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@interface SUICIndexCacheEntry : NSObject {

	unsigned _numAuraIndices;
	unsigned _numAuraIndicesCulled;
	unsigned _numWaveIndices;
	unsigned* _metal_indices;

}

@property (assign,nonatomic) unsigned numAuraIndices;                    //@synthesize numAuraIndices=_numAuraIndices - In the implementation block
@property (assign,nonatomic) unsigned numAuraIndicesCulled;              //@synthesize numAuraIndicesCulled=_numAuraIndicesCulled - In the implementation block
@property (assign,nonatomic) unsigned numWaveIndices;                    //@synthesize numWaveIndices=_numWaveIndices - In the implementation block
@property (assign,nonatomic) unsigned* metal_indices;                    //@synthesize metal_indices=_metal_indices - In the implementation block
-(void)dealloc;
-(unsigned)numAuraIndices;
-(void)setNumAuraIndices:(unsigned)arg1 ;
-(unsigned)numAuraIndicesCulled;
-(void)setNumAuraIndicesCulled:(unsigned)arg1 ;
-(unsigned)numWaveIndices;
-(void)setNumWaveIndices:(unsigned)arg1 ;
-(unsigned*)metal_indices;
-(void)setMetal_indices:(unsigned*)arg1 ;
@end

