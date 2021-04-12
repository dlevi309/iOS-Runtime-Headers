/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADGraphicProperties, CHDTrendlineLabel, EDString;

@interface CHDTrendline : NSObject {

	BOOL mDisplayEquation;
	BOOL mDisplayRSquaredValue;
	double mBackward;
	double mForward;
	double mInterceptYAxis;
	int mPolynomialOrder;
	long long mMovingAveragePeriod;
	int mType;
	OADGraphicProperties* mGraphicProperties;
	CHDTrendlineLabel* mLabel;
	EDString* mName;

}
+(id)trendline;
-(id)init;
-(id)description;
-(id)name;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(double)forward;
-(double)backward;
-(id)graphicProperties;
-(void)setGraphicProperties:(id)arg1 ;
-(BOOL)isDisplayEquation;
-(void)setDisplayEquation:(BOOL)arg1 ;
-(BOOL)isDisplayRSquaredValue;
-(void)setDisplayRSquaredValue:(BOOL)arg1 ;
-(void)setBackward:(double)arg1 ;
-(void)setForward:(double)arg1 ;
-(double)interceptYAxis;
-(void)setInterceptYAxis:(double)arg1 ;
-(int)polynomialOrder;
-(void)setPolynomialOrder:(int)arg1 ;
-(long long)movingAveragePeriod;
-(void)setMovingAveragePeriod:(long long)arg1 ;
-(id)defaultNameWithSeriesName:(id)arg1 ;
@end

