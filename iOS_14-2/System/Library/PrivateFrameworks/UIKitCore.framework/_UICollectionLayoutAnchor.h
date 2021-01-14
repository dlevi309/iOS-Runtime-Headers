/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@interface _UICollectionLayoutAnchor : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	unsigned long long _edges;
	CGPoint _offset;
	CGPoint _anchorPoint;
	BOOL _offsetIsUnitOffset;

}

@property (nonatomic,readonly) unsigned long long edges; 
@property (nonatomic,readonly) CGPoint offset; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 unitOffset:(CGPoint)arg2 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 offset:(CGPoint)arg2 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 offset:(CGPoint)arg2 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 unitOffset:(CGPoint)arg2 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)anchorPoint;
-(unsigned long long)edges;
-(CGPoint)offset;
-(id)_apiRepresentation;
-(id)initWithEdges:(unsigned long long)arg1 offset:(CGPoint)arg2 anchorPoint:(CGPoint)arg3 offsetIsUnitOffset:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

