/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)direction;
-(int)valueType;
-(void)setDirection:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(int)type;
-(void)setValueType:(int)arg1 ;
-(double)value;
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

