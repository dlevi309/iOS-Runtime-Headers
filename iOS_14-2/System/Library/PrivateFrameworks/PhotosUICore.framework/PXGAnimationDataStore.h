/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class NSMutableIndexSet, NSIndexSet, NSString;

@interface PXGAnimationDataStore : NSObject <PXGDiagnosticsProvider> {

	unsigned _spriteCapacity;
	unsigned short _groupCapacity;
	unsigned _mappedSpriteCapacity;
	unsigned short _mappedAnimationCapacity;
	NSMutableIndexSet* _activeGroupIndexes;
	unsigned short _mappedAnimationCount;
	unsigned _spriteCount;
	unsigned _mappedSpriteCount;
	SCD_Struct_PX116* _spriteInfos;
	SCD_Struct_PX117* _groupInfos;
	unsigned short* _animationIndexBySpriteIndex;
	unsigned short* _groupIndexByAnimationIndex;

}

@property (assign,nonatomic) unsigned spriteCount;                                       //@synthesize spriteCount=_spriteCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX116* spriteInfos;                            //@synthesize spriteInfos=_spriteInfos - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * activeGroupIndexes; 
@property (nonatomic,readonly) SCD_Struct_PX117* groupInfos;                             //@synthesize groupInfos=_groupInfos - In the implementation block
@property (assign,nonatomic) unsigned mappedSpriteCount;                                 //@synthesize mappedSpriteCount=_mappedSpriteCount - In the implementation block
@property (nonatomic,readonly) unsigned short* animationIndexBySpriteIndex;              //@synthesize animationIndexBySpriteIndex=_animationIndexBySpriteIndex - In the implementation block
@property (assign,nonatomic) unsigned short mappedAnimationCount;                        //@synthesize mappedAnimationCount=_mappedAnimationCount - In the implementation block
@property (nonatomic,readonly) unsigned short* groupIndexByAnimationIndex;               //@synthesize groupIndexByAnimationIndex=_groupIndexByAnimationIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)applySpriteChangeDetails:(id)arg1 ;
-(unsigned)spriteCount;
-(unsigned short*)groupIndexByAnimationIndex;
-(SCD_Struct_PX117*)groupInfos;
-(unsigned short)mappedAnimationCount;
-(void)setMappedSpriteCount:(unsigned)arg1 ;
-(SCD_Struct_PX116*)spriteInfos;
-(NSIndexSet *)activeGroupIndexes;
-(NSString *)diagnosticDescription;
-(void)setMappedAnimationCount:(unsigned short)arg1 ;
-(void)setSpriteCount:(unsigned)arg1 ;
-(void)_resizeStorageToGroupIndex:(unsigned short)arg1 ;
-(void)checkInGroupAtIndexes:(id)arg1 ;
-(unsigned)mappedSpriteCount;
-(id)spriteIndexesExpiringAtTime:(double)arg1 ;
-(unsigned short)checkOutGroup;
-(unsigned short*)animationIndexBySpriteIndex;
-(void)increaseMappedSpriteCountBy:(unsigned)arg1 usingAnimationIndex:(unsigned short)arg2 ;
-(void)dealloc;
@end

