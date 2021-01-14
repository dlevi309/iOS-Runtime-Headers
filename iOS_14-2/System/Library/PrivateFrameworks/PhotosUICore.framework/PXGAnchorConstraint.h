/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXGSpriteReference;

@interface PXGAnchorConstraint : NSObject <NSCopying> {

	BOOL _visiblePortionOnly;
	unsigned _spriteEdge;
	unsigned _visibleRectEdge;
	PXGSpriteReference* _spriteReference;
	unsigned long long _referencingOptions;
	long long _spriteAttribute;
	long long _inequality;
	double _offset;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) PXGSpriteReference * spriteReference;               //@synthesize spriteReference=_spriteReference - In the implementation block
@property (assign,nonatomic) unsigned long long referencingOptions;              //@synthesize referencingOptions=_referencingOptions - In the implementation block
@property (assign,nonatomic) long long spriteAttribute;                          //@synthesize spriteAttribute=_spriteAttribute - In the implementation block
@property (assign,nonatomic) BOOL visiblePortionOnly;                            //@synthesize visiblePortionOnly=_visiblePortionOnly - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                               //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long inequality;                               //@synthesize inequality=_inequality - In the implementation block
@property (assign,nonatomic) unsigned spriteEdge;                                //@synthesize spriteEdge=_spriteEdge - In the implementation block
@property (assign,nonatomic) unsigned visibleRectEdge;                           //@synthesize visibleRectEdge=_visibleRectEdge - In the implementation block
@property (assign,nonatomic) double offset;                                      //@synthesize offset=_offset - In the implementation block
-(unsigned long long)referencingOptions;
-(PXGSpriteReference *)spriteReference;
-(unsigned)visibleRectEdge;
-(void)setVisibleRectEdge:(unsigned)arg1 ;
-(long long)inequality;
-(void)setSpriteAttribute:(long long)arg1 ;
-(void)setReferencingOptions:(unsigned long long)arg1 ;
-(void)setInequality:(long long)arg1 ;
-(double)offset;
-(unsigned)spriteEdge;
-(BOOL)visiblePortionOnly;
-(id)description;
-(void)setSpriteReference:(PXGSpriteReference *)arg1 ;
-(void)setSpriteEdge:(unsigned)arg1 ;
-(void)setOffset:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setVisiblePortionOnly:(BOOL)arg1 ;
-(long long)spriteAttribute;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

