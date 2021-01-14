/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)absoluteDimension:(double)arg1 ;
+(id)fractionalWidthDimension:(double)arg1 ;
+(id)fractionalHeightDimension:(double)arg1 ;
+(id)estimatedDimension:(double)arg1 ;
+(id)_dimensionWithDimension:(double)arg1 semantic:(long long)arg2 ;
-(BOOL)isEstimated;
-(long long)semantic;
-(double)dimension;
-(BOOL)isFractionalWidth;
-(BOOL)isAbsolute;
-(id)initWithDimension:(double)arg1 semantic:(long long)arg2 ;
-(void)setDimension:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSemantic:(long long)arg1 ;
-(BOOL)isFractionalHeight;
-(BOOL)isEqual:(id)arg1 ;
@end

