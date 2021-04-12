/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@protocol AXMDataSummaryCategoryNameProvider;
@class NSArray, AXMDataRegressionModel, NSObject, NSNumberFormatter, NSString;

@interface AXMDataSummary : NSObject {

	NSArray* _axisTitles;
	NSArray* _xValues;
	NSArray* _yValues;
	AXMDataRegressionModel* _regressionModel;
	unsigned long long _n;
	double _r;
	double _rSquared;
	double _minX;
	double _maxX;
	double _meanX;
	double _varianceX;
	double _minY;
	double _maxY;
	double _meanY;
	double _varianceY;
	double _covariance;
	double _slope;
	double _intercept;
	NSArray* _residuals;
	NSArray* _outliers;
	NSObject*<AXMDataSummaryCategoryNameProvider> _categoryNameDelegate;
	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                                                    //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,readonly) NSArray * axisTitles;                                                                 //@synthesize axisTitles=_axisTitles - In the implementation block
@property (nonatomic,readonly) NSArray * xValues;                                                                    //@synthesize xValues=_xValues - In the implementation block
@property (nonatomic,readonly) NSArray * yValues;                                                                    //@synthesize yValues=_yValues - In the implementation block
@property (nonatomic,readonly) AXMDataRegressionModel * regressionModel;                                             //@synthesize regressionModel=_regressionModel - In the implementation block
@property (n,nonatomic,readonly) unsigned long long n;                                                               //@synthesize n=_n - In the implementation block
@property (r,nonatomic,readonly) double r;                                                                           //@synthesize r=_r - In the implementation block
@property (nonatomic,readonly) double rSquared;                                                                      //@synthesize rSquared=_rSquared - In the implementation block
@property (nonatomic,readonly) double minX;                                                                          //@synthesize minX=_minX - In the implementation block
@property (nonatomic,readonly) double maxX;                                                                          //@synthesize maxX=_maxX - In the implementation block
@property (nonatomic,readonly) double meanX;                                                                         //@synthesize meanX=_meanX - In the implementation block
@property (nonatomic,readonly) double varianceX;                                                                     //@synthesize varianceX=_varianceX - In the implementation block
@property (nonatomic,readonly) double minY;                                                                          //@synthesize minY=_minY - In the implementation block
@property (nonatomic,readonly) double maxY;                                                                          //@synthesize maxY=_maxY - In the implementation block
@property (nonatomic,readonly) double meanY;                                                                         //@synthesize meanY=_meanY - In the implementation block
@property (nonatomic,readonly) double varianceY;                                                                     //@synthesize varianceY=_varianceY - In the implementation block
@property (nonatomic,readonly) double covariance;                                                                    //@synthesize covariance=_covariance - In the implementation block
@property (nonatomic,readonly) double slope;                                                                         //@synthesize slope=_slope - In the implementation block
@property (nonatomic,readonly) double intercept;                                                                     //@synthesize intercept=_intercept - In the implementation block
@property (nonatomic,readonly) NSArray * residuals;                                                                  //@synthesize residuals=_residuals - In the implementation block
@property (nonatomic,readonly) NSArray * outliers;                                                                   //@synthesize outliers=_outliers - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<AXMDataSummaryCategoryNameProvider> categoryNameDelegate;              //@synthesize categoryNameDelegate=_categoryNameDelegate - In the implementation block
@property (nonatomic,readonly) NSString * modelDescription; 
@property (nonatomic,readonly) NSString * slopeDescription; 
@property (nonatomic,readonly) NSString * confidenceDescription; 
@property (nonatomic,readonly) NSString * minValueDescription; 
@property (nonatomic,readonly) NSString * maxValueDescription; 
@property (nonatomic,readonly) NSString * meanValueDescription; 
@property (nonatomic,readonly) NSString * medianValueDescription; 
@property (nonatomic,readonly) NSString * outliersDescription; 
@property (nonatomic,readonly) NSString * bestFitCurveEquation; 
@property (nonatomic,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) NSString * simpleDescription; 
@property (nonatomic,readonly) NSString * numericalDescription; 
-(id)description;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(NSString *)modelDescription;
-(void)compute;
-(double)intercept;
-(NSString *)fullDescription;
-(double)maxX;
-(double)minX;
-(double)minY;
-(double)maxY;
-(NSString *)simpleDescription;
-(unsigned long long)n;
-(NSArray *)xValues;
-(void)getValues:(double*)arg1 fromNSNumberArray:(id)arg2 ;
-(NSArray *)yValues;
-(void)setRegressionModel:(AXMDataRegressionModel *)arg1 ;
-(AXMDataRegressionModel *)regressionModel;
-(id)descriptionForXValue:(double)arg1 ;
-(NSString *)slopeDescription;
-(NSString *)confidenceDescription;
-(NSString *)outliersDescription;
-(NSString *)meanValueDescription;
-(NSString *)minValueDescription;
-(NSString *)maxValueDescription;
-(id)stringForComponents:(id)arg1 ;
-(void)computeRanges;
-(void)computeMeans;
-(void)computeCovariance;
-(void)computeVariances;
-(void)computeR;
-(void)computeLinearRegression;
-(void)computeResiduals;
-(void)computeOutliers;
-(double)getMean:(id)arg1 ;
-(double)getVariance:(id)arg1 ;
-(double)positionForXAxisValue:(double)arg1 ;
-(NSObject*<AXMDataSummaryCategoryNameProvider>)categoryNameDelegate;
-(id)initWithAxisTitles:(id)arg1 xValues:(id)arg2 yValues:(id)arg3 ;
-(void)computeRegressionModel:(/*^block*/id)arg1 ;
-(NSString *)medianValueDescription;
-(NSString *)bestFitCurveEquation;
-(NSString *)numericalDescription;
-(double)getMedian:(id)arg1 ;
-(double)positionForYAxisValue:(double)arg1 ;
-(NSArray *)axisTitles;
-(double)r;
-(double)rSquared;
-(double)meanX;
-(double)varianceX;
-(double)meanY;
-(double)varianceY;
-(double)covariance;
-(double)slope;
-(NSArray *)residuals;
-(NSArray *)outliers;
-(void)setCategoryNameDelegate:(NSObject*<AXMDataSummaryCategoryNameProvider>)arg1 ;
@end

