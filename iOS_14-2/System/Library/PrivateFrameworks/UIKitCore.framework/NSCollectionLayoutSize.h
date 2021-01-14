/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutDimension;

@interface NSCollectionLayoutSize : NSObject <NSCopying> {

	NSCollectionLayoutDimension* _widthDimension;
	NSCollectionLayoutDimension* _heightDimension;
	long long _widthSemantic;
	long long _heightSemantic;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long widthSemantic;                                    //@synthesize widthSemantic=_widthSemantic - In the implementation block
@property (assign,nonatomic) long long heightSemantic;                                   //@synthesize heightSemantic=_heightSemantic - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutDimension * widthDimension;               //@synthesize widthDimension=_widthDimension - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutDimension * heightDimension;              //@synthesize heightDimension=_heightDimension - In the implementation block
+(id)sizeWithSize:(CGSize)arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3 ;
+(id)sizeWithWidthDimension:(id)arg1 heightDimension:(id)arg2 ;
+(id)sizeWithAbsoluteSize:(CGSize)arg1 ;
+(id)sizeWithContainerWidthFactor:(double)arg1 containerHeightFactor:(double)arg2 ;
+(id)sizeWithWidth:(double)arg1 widthSemantic:(long long)arg2 height:(double)arg3 heightSemantic:(long long)arg4 ;
+(id)sizeWithContainerSize;
-(BOOL)isEstimated;
-(NSCollectionLayoutDimension *)widthDimension;
-(NSCollectionLayoutDimension *)heightDimension;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setWidthDimension:(NSCollectionLayoutDimension *)arg1 ;
-(void)setHeightDimension:(NSCollectionLayoutDimension *)arg1 ;
-(CGSize)_effectiveSizeForContainer:(id)arg1 ;
-(id)description;
-(void)setHeightSemantic:(long long)arg1 ;
-(long long)heightSemantic;
-(BOOL)isContainerSize;
-(CGSize)_effectiveSizeForContainer:(id)arg1 ignoringInsets:(BOOL)arg2 ;
-(id)initWithSize:(CGSize)arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3 width:(id)arg4 height:(id)arg5 ;
-(void)setWidthSemantic:(long long)arg1 ;
-(BOOL)_isEstimatedForAxis:(unsigned long long)arg1 ;
-(long long)widthSemantic;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

