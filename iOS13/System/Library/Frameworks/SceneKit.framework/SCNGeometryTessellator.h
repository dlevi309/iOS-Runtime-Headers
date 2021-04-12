/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface SCNGeometryTessellator : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _clients;
	BOOL _adaptive;
	BOOL _screenSpace;
	float _maximumEdgeLength;
	float _edgeTessellationFactor;
	float _insideTessellationFactor;
	float _tessellationFactorScale;
	long long _smoothingMode;
	unsigned long long _partitionMode;

}

@property (assign,nonatomic) double tessellationFactorScale; 
@property (assign,nonatomic) unsigned long long tessellationPartitionMode; 
@property (assign,getter=isAdaptive,nonatomic) BOOL adaptive; 
@property (assign,getter=isScreenSpace,nonatomic) BOOL screenSpace; 
@property (assign,nonatomic) double edgeTessellationFactor; 
@property (assign,nonatomic) double insideTessellationFactor; 
@property (assign,nonatomic) double maximumEdgeLength; 
@property (assign,nonatomic) long long smoothingMode; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAdaptive;
-(void)setAdaptive:(BOOL)arg1 ;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)setTessellationFactorScale:(double)arg1 ;
-(void)setTessellationPartitionMode:(unsigned long long)arg1 ;
-(unsigned long long)tessellationPartitionMode;
-(void)clientWillDie:(id)arg1 ;
-(void)tessellatorValueDidChangeForClient:(id)arg1 ;
-(BOOL)isScreenSpace;
-(double)tessellationFactorScale;
-(long long)smoothingMode;
-(double)edgeTessellationFactor;
-(double)insideTessellationFactor;
-(double)maximumEdgeLength;
-(SCD_Struct_SC126)_tessellatorValueForGeometry:(id)arg1 ;
-(void)tessellatorValueDidChange;
-(void)setSmoothingMode:(long long)arg1 ;
-(BOOL)adaptive;
-(BOOL)screenSpace;
-(void)setScreenSpace:(BOOL)arg1 ;
-(void)setEdgeTessellationFactor:(double)arg1 ;
-(void)setInsideTessellationFactor:(double)arg1 ;
-(void)setMaximumEdgeLength:(double)arg1 ;
@end

