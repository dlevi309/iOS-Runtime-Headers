/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class CHDChart, CHDData, OADGraphicProperties;

@interface CHDErrorBar : NSObject {

	CHDChart* mChart;
	double mValue;
	int mType;
	int mValueType;
	int mDirection;
	BOOL mNoEndCap;
	CHDData* mMinusValues;
	CHDData* mPlusValues;
	OADGraphicProperties* mGraphicProperties;

}
+(id)errorBarWithChart:(id)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
-(id)graphicProperties;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setNoEndCap:(BOOL)arg1 ;
-(void)setPlusValues:(id)arg1 ;
-(void)setMinusValues:(id)arg1 ;
-(BOOL)isNoEndCap;
-(id)minusValues;
-(id)plusValues;
@end

