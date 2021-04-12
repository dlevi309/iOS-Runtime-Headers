/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class NSString;

@interface PXGSpriteDataStore : NSObject <PXGDiagnosticsProvider> {

	unsigned _capacity;
	unsigned _count;
	SCD_Struct_PX11* _geometries;
	SCD_Struct_PX83* _styles;
	SCD_Struct_PX15* _infos;

}

@property (assign,nonatomic) unsigned count;                                       //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX11* geometries;                        //@synthesize geometries=_geometries - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX83* styles;                            //@synthesize styles=_styles - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX15* infos;                             //@synthesize infos=_infos - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX84* sprites; 
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newSpriteDataStore;
-(void)setCount:(unsigned)arg1 ;
-(void)moveSpritesFromIndexes:(CFArrayRef)arg1 toIndexes:(id)arg2 ;
-(void)removeSpritesInRange:(PXGSpriteIndexRange)arg1 ;
-(id)init;
-(void)enumerateSpritesInRange:(PXGSpriteIndexRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)applyChangeDetails:(id)arg1 ;
-(void)_collectSpriteIndexes:(id)arg1 inRange:(PXGSpriteIndexRange)arg2 inRect:(CGRect)arg3 ;
-(unsigned)count;
-(void)recycle;
-(id)spriteIndexesWithMediaFlags:(unsigned char)arg1 ;
-(SCD_Struct_PX11*)geometries;
-(void)insertSpritesInRange:(PXGSpriteIndexRange)arg1 ;
-(SCD_Struct_PX15*)infos;
-(NSString *)description;
-(NSString *)diagnosticDescription;
-(id)spriteIndexesInRect:(CGRect)arg1 ;
-(SCD_Struct_PX84*)sprites;
-(SCD_Struct_PX83*)styles;
-(void)moveSpritesInRange:(PXGSpriteIndexRange)arg1 toRange:(PXGSpriteIndexRange)arg2 ;
-(id)spriteAtIndexes:(id)arg1 inRect:(CGRect)arg2 ;
-(void)setSprites:(SCD_Struct_PX84*)arg1 ;
-(id)_init;
-(void)enumerateSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(SCD_Struct_PX84*)spritesInRange:(PXGSpriteIndexRange)arg1 ;
-(void)dealloc;
@end

