/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDResources, NSMutableArray, NSString;

@interface EDConditionalFormattingRule : NSObject {

	EDResources* mResources;
	int mType;
	int mOperator;
	NSMutableArray* mFormulas;
	unsigned long long mDifferentialStyleIndex;
	BOOL mStopIfTrue;
	BOOL mAppliesToDateOnly;
	long long mPriority;
	BOOL mAboveAverage;
	BOOL mBottom;
	BOOL mEqualAverage;
	BOOL mPercent;
	unsigned long long mRank;
	long long mStdDev;
	NSString* mText;
	int mTimePeriod;

}
+(id)conditionalFormattingRuleWithResources:(id)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(BOOL)bottom;
-(void)setBottom:(BOOL)arg1 ;
-(int)timePeriod;
-(void)setTimePeriod:(int)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setPercent:(BOOL)arg1 ;
-(BOOL)percent;
-(unsigned long long)formulaCount;
-(id)formulaAtIndex:(unsigned long long)arg1 ;
-(void)setStopIfTrue:(BOOL)arg1 ;
-(void)setOperatorEnum:(int)arg1 ;
-(void)addFormula:(id)arg1 worksheet:(id)arg2 ;
-(void)setDifferentialStyle:(id)arg1 ;
-(id)differentialStyle;
-(BOOL)appliesToDateOnly;
-(long long)compareToOtherRuleUsingPriority:(id)arg1 ;
-(int)operatorEnum;
-(BOOL)stopIfTrue;
-(BOOL)aboveAverage;
-(BOOL)equalAverage;
-(long long)stdDev;
-(void)setAppliesToDateOnly:(BOOL)arg1 ;
-(unsigned long long)differentialStyleIndex;
-(void)setDifferentialStyleIndex:(unsigned long long)arg1 ;
-(void)setAboveAverage:(BOOL)arg1 ;
-(void)setEqualAverage:(BOOL)arg1 ;
-(void)setStdDev:(long long)arg1 ;
@end

