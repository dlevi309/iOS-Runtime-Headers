/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutAnchor : NSObject <NSCopying> {

	BOOL _offsetIsUnitOffset;
	unsigned long long _edges;
	CGPoint _offset;
	CGPoint _anchorPoint;

}

@property (assign,nonatomic) unsigned long long edges;               //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) CGPoint offset;                         //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint;                    //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) BOOL offsetIsUnitOffset;                //@synthesize offsetIsUnitOffset=_offsetIsUnitOffset - In the implementation block
@property (nonatomic,readonly) BOOL isAbsoluteOffset; 
@property (nonatomic,readonly) BOOL isFractionalOffset; 
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 unitOffset:(CGPoint)arg2 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 fractionalOffset:(CGPoint)arg2 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 offset:(CGPoint)arg2 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 absoluteOffset:(CGPoint)arg2 ;
-(void)setOffsetIsUnitOffset:(BOOL)arg1 ;
-(CGPoint)anchorPoint;
-(unsigned long long)edges;
-(CGPoint)offset;
-(id)description;
-(BOOL)isFractionalOffset;
-(CGRect)_itemFrameForContainerRect:(CGRect)arg1 itemSize:(CGSize)arg2 itemLayoutAnchor:(id)arg3 ;
-(BOOL)isAbsoluteOffset;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(id)initWithEdges:(unsigned long long)arg1 offset:(CGPoint)arg2 anchorPoint:(CGPoint)arg3 offsetIsUnitOffset:(BOOL)arg4 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(BOOL)offsetIsUnitOffset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

