/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXGSpriteIndexReferencing.h>

@class PXGLayout, NSString;

@interface PXGSpriteReference : NSObject <PXGSpriteIndexReferencing> {

	BOOL _isDynamic;
	unsigned _spriteIndex;
	long long _layoutVersion;
	PXGLayout* _layout;
	id _objectReference;

}

@property (assign,nonatomic) unsigned spriteIndex;                   //@synthesize spriteIndex=_spriteIndex - In the implementation block
@property (assign,nonatomic) long long layoutVersion;                //@synthesize layoutVersion=_layoutVersion - In the implementation block
@property (assign,nonatomic,__weak) PXGLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL isDynamic;                         //@synthesize isDynamic=_isDynamic - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,retain) id objectReference;                     //@synthesize objectReference=_objectReference - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectReference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)spriteIndex;
-(void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2 ;
-(void)setIsDynamic:(BOOL)arg1 ;
-(BOOL)isDynamic;
-(id)init;
-(void)setSpriteIndex:(unsigned)arg1 ;
-(long long)layoutVersion;
-(void)setLayoutVersion:(long long)arg1 ;
-(BOOL)hasObjectReference;
-(NSString *)description;
-(BOOL)isValid;
-(unsigned long long)hash;
-(id)_init;
-(id)objectReference;
-(void)setLayout:(PXGLayout *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObjectReference:(id)arg1 ;
-(PXGLayout *)layout;
@end

