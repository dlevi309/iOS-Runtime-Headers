/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPListLabelGeometry : NSObject {

	double mScale;
	double mBaselineOffset;
	BOOL mScaleWithText;

}

@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double baselineOffset; 
@property (assign,nonatomic) BOOL scaleWithText; 
+(id)listLabelGeometry;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(id)initWithScale:(double)arg1 scaleWithText:(BOOL)arg2 baselineOffset:(double)arg3 ;
-(BOOL)scaleWithText;
-(void)setScaleWithText:(BOOL)arg1 ;
@end

