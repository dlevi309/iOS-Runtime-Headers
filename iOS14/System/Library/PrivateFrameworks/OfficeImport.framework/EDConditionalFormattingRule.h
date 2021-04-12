/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRank:(unsigned long long)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(long long)stdDev;
-(void)setBottom:(BOOL)arg1 ;
-(id)description;
-(id)text;
-(BOOL)bottom;
-(int)type;
-(unsigned long long)rank;
-(id)initWithResources:(id)arg1 ;
-(BOOL)percent;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setTimePeriod:(int)arg1 ;
-(int)timePeriod;
-(void)setPercent:(BOOL)arg1 ;
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
-(void)setAppliesToDateOnly:(BOOL)arg1 ;
-(unsigned long long)differentialStyleIndex;
-(void)setDifferentialStyleIndex:(unsigned long long)arg1 ;
-(void)setAboveAverage:(BOOL)arg1 ;
-(void)setEqualAverage:(BOOL)arg1 ;
-(void)setStdDev:(long long)arg1 ;
@end

