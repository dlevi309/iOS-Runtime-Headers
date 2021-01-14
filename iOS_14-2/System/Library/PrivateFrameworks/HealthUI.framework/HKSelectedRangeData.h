/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSAttributedString, NSNumber, UIColor;

@interface HKSelectedRangeData : NSObject {

	long long _statisticsType;
	long long _dataType;
	NSAttributedString* _attributedString;
	NSNumber* _valueAsNumber;
	UIColor* _prefixColor;

}

@property (assign,nonatomic) long long statisticsType;                           //@synthesize statisticsType=_statisticsType - In the implementation block
@property (assign,nonatomic) long long dataType;                                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) NSNumber * valueAsNumber;                           //@synthesize valueAsNumber=_valueAsNumber - In the implementation block
@property (nonatomic,retain) UIColor * prefixColor;                              //@synthesize prefixColor=_prefixColor - In the implementation block
-(long long)dataType;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(void)setDataType:(long long)arg1 ;
-(NSAttributedString *)attributedString;
-(NSNumber *)valueAsNumber;
-(id)initWithStatisticsType:(long long)arg1 ;
-(void)setValueAsNumber:(NSNumber *)arg1 ;
-(void)setStatisticsType:(long long)arg1 ;
-(long long)statisticsType;
-(UIColor *)prefixColor;
-(void)setPrefixColor:(UIColor *)arg1 ;
@end

