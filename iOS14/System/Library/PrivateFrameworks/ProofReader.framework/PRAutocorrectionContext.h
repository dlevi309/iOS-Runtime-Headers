/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


@interface PRAutocorrectionContext : NSObject {

	unsigned long long _modificationMask;

}
+(void)clearCaches;
+(id)autocorrectionContextOfType:(unsigned long long)arg1 ;
-(id)guesses;
-(id)correction;
-(void)reset;
-(id)prefixes;
-(id)completions;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(id)currentModifications;
-(id)addedModifications;
-(id)removedModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2 ;
-(void)setModificationMask:(unsigned long long)arg1 ;
-(unsigned long long)modificationMask;
-(void)setValidSequenceCorrectionThreshold:(double)arg1 ;
-(double)validSequenceCorrectionThreshold;
@end

