/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDImageFill.h>

@class TSPData, TSUColor;

@interface TSDMutableImageFill : TSDImageFill

@property (nonatomic,retain) TSPData * imageData; 
@property (assign,nonatomic) BOOL interpretsUntaggedImageDataAsGeneric; 
@property (assign,nonatomic) int technique; 
@property (nonatomic,copy) TSUColor * tintColor; 
@property (assign,nonatomic) CGSize fillSize; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setTintColor:(TSUColor *)arg1 ;
-(void)setImageData:(TSPData *)arg1 ;
-(void)setTechnique:(int)arg1 ;
-(void)setInterpretsUntaggedImageDataAsGeneric:(BOOL)arg1 ;
-(void)setFillSize:(CGSize)arg1 ;
@end

