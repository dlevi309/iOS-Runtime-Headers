/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@class NSAttributedString;

@interface EQKitStringBox : EQKitBox {

	NSAttributedString* mAttributedString;
	CTLineRef mLine;
	double mHeight;
	double mDepth;
	double mWidth;
	CGRect mErasableBounds;
	BOOL mDimensionsValid;
	CGColorRef mCGColor;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) CTLineRef line; 
@property (nonatomic,readonly) CGColorRef color; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)depth;
-(double)width;
-(double)height;
-(CGColorRef)color;
-(NSAttributedString *)attributedString;
-(CTLineRef)line;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(id)initWithAttributedString:(id)arg1 cgColor:(CGColorRef)arg2 ;
-(void)p_cacheDimensions;
-(double)positionOfCharacterAtIndex:(unsigned long long)arg1 ;
@end

