/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSAttributedString, NSNumber;

@interface HKSelectedRangeData : NSObject {

	long long _statisticsType;
	long long _dataType;
	NSAttributedString* _attributedString;
	NSNumber* _valueAsNumber;

}

@property (assign,nonatomic) long long statisticsType;                           //@synthesize statisticsType=_statisticsType - In the implementation block
@property (assign,nonatomic) long long dataType;                                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) NSNumber * valueAsNumber;                           //@synthesize valueAsNumber=_valueAsNumber - In the implementation block
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(long long)dataType;
-(NSAttributedString *)attributedString;
-(NSNumber *)valueAsNumber;
-(long long)statisticsType;
-(void)setStatisticsType:(long long)arg1 ;
-(void)setDataType:(long long)arg1 ;
-(void)setValueAsNumber:(NSNumber *)arg1 ;
-(id)initWithStatisticsType:(long long)arg1 ;
@end

