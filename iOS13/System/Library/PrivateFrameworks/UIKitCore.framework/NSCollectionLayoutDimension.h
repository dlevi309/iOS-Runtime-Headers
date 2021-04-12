/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutDimension : NSObject <NSCopying> {

	double _dimension;
	long long _semantic;

}

@property (assign,nonatomic) long long semantic;                     //@synthesize semantic=_semantic - In the implementation block
@property (assign,nonatomic) double dimension;                       //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) BOOL isFractionalWidth; 
@property (nonatomic,readonly) BOOL isFractionalHeight; 
@property (nonatomic,readonly) BOOL isAbsolute; 
@property (nonatomic,readonly) BOOL isEstimated; 
+(id)fractionalWidthDimension:(double)arg1 ;
+(id)fractionalHeightDimension:(double)arg1 ;
+(id)absoluteDimension:(double)arg1 ;
+(id)estimatedDimension:(double)arg1 ;
+(id)_dimensionWithDimension:(double)arg1 semantic:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)dimension;
-(BOOL)isEstimated;
-(id)initWithDimension:(double)arg1 semantic:(long long)arg2 ;
-(long long)semantic;
-(BOOL)isAbsolute;
-(BOOL)isFractionalWidth;
-(BOOL)isFractionalHeight;
-(void)setDimension:(double)arg1 ;
-(void)setSemantic:(long long)arg1 ;
@end

