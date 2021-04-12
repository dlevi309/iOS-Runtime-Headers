/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMProperty.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OITSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {

	OITSUColor* mBorderColor;
	OITSUColor* mBorderTopColor;
	OITSUColor* mBorderLeftColor;
	OITSUColor* mBorderBottomColor;
	OITSUColor* mBorderRightColor;
	int mBorderStyle[5];
	int mBorderWidth[5];

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)borderColor;
-(id)styleString;
-(int*)borderWidths;
-(id)colorString;
-(id)cssStringForName:(id)arg1 ;
-(id)initWithOADStroke:(id)arg1 ;
-(id)cssString;
-(id)widthString;
-(id)stringFromStyleEnum:(int)arg1 ;
-(id)stringFromWidthEnum:(int)arg1 ;
-(id)stringFromColor:(id)arg1 ;
-(BOOL)isNoneAtLocation:(int)arg1 ;
-(void)setNoneAtLocation:(int)arg1 ;
-(BOOL)hasSameColorsAs:(id)arg1 ;
-(BOOL)hasSameStylesAs:(id)arg1 ;
-(BOOL)hasSameWidthsAs:(id)arg1 ;
-(void)setBorderStyleAndWidth:(int)arg1 location:(unsigned)arg2 ;
-(id)initWithEDBorders:(id)arg1 ;
-(int*)borderStyles;
-(id)styleHashNumber;
-(id)widthHashNumber;
@end

