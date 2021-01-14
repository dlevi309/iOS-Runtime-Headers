/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableIndexSet;

@interface PXGSpriteMetadataStore : NSObject {

	unsigned short _resizableCapInsetsCapacity;
	SCD_Struct_PX80* _resizableCapInsets;
	unsigned short _effectsCapacity;
	SCD_Struct_PX54* _effectData;
	int* _effectShaderFlags;
	NSMutableIndexSet* _reusableEffectIds;
	unsigned short _numberOfResizableCapInsets;
	unsigned short _numberOfEffects;

}

@property (nonatomic,readonly) unsigned short numberOfResizableCapInsets;              //@synthesize numberOfResizableCapInsets=_numberOfResizableCapInsets - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_PX80* resizableCapInsets;              //@synthesize resizableCapInsets=_resizableCapInsets - In the implementation block
@property (nonatomic,readonly) unsigned short numberOfEffects;                         //@synthesize numberOfEffects=_numberOfEffects - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_PX54* effectData;                      //@synthesize effectData=_effectData - In the implementation block
@property (nonatomic,readonly) const int* effectShaderFlags;                           //@synthesize effectShaderFlags=_effectShaderFlags - In the implementation block
-(const int*)effectShaderFlags;
-(id)init;
-(unsigned short)numberOfEffects;
-(unsigned short)numberOfResizableCapInsets;
-(unsigned short)addResizableCapInsets:(SCD_Struct_PX80)arg1 ;
-(unsigned short)addEffectWithType:(unsigned short)arg1 shaderFlags:(int)arg2 ;
-(const SCD_Struct_PX54*)effectData;
-(SCD_Struct_PX54*)dataForEffectId:(unsigned short)arg1 ;
-(void)removeEffectWithId:(unsigned short)arg1 ;
-(const SCD_Struct_PX80*)resizableCapInsets;
-(void)dealloc;
-(unsigned short)_indexOfResizableCapInsets:(SCD_Struct_PX80)arg1 ;
@end

