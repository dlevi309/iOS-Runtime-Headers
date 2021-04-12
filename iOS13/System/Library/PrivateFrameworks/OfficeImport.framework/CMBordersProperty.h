/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMProperty.h>

@class OITSUColor;

@interface CMBordersProperty : CMProperty {

	OITSUColor* mBorderColor;
	OITSUColor* mBorderTopColor;
	OITSUColor* mBorderLeftColor;
	OITSUColor* mBorderBottomColor;
	OITSUColor* mBorderRightColor;
	int mBorderStyle[5];
	int mBorderWidth[5];
	int mCustomWidth;

}
+(BOOL)isStroked:(id)arg1 ;
-(id)init;
-(id)styleString;
-(id)colorString;
-(id)cssStringForName:(id)arg1 ;
-(id)initWithOADStroke:(id)arg1 ;
-(void)adjustValues;
-(id)cssString;
-(id)widthString;
-(id)stringFromStyleEnum:(int)arg1 ;
-(id)stringFromWidthEnum:(int)arg1 ;
-(id)stringFromColor:(id)arg1 ;
-(BOOL)isNoneAtLocation:(int)arg1 ;
-(void)setNoneAtLocation:(int)arg1 ;
-(void)setFromOadStroke:(id)arg1 atLocation:(int)arg2 state:(id)arg3 ;
@end

