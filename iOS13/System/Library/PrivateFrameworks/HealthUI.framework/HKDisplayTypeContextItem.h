/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, NSAttributedString, HKUIMetricColors;

@interface HKDisplayTypeContextItem : NSObject {

	BOOL _infoHidden;
	NSString* _title;
	NSString* _unit;
	NSString* _value;
	NSString* _valueContext;
	NSAttributedString* _attributedValue;
	NSString* _dateString;
	HKUIMetricColors* _metricColors;
	HKUIMetricColors* _selectedMetricColors;

}

@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL infoHidden;                                      //@synthesize infoHidden=_infoHidden - In the implementation block
@property (nonatomic,copy) NSString * unit;                                        //@synthesize unit=_unit - In the implementation block
@property (nonatomic,copy) NSString * value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * valueContext;                                //@synthesize valueContext=_valueContext - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedValue;                   //@synthesize attributedValue=_attributedValue - In the implementation block
@property (nonatomic,copy) NSString * dateString;                                  //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * metricColors;                      //@synthesize metricColors=_metricColors - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * selectedMetricColors;              //@synthesize selectedMetricColors=_selectedMetricColors - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)value;
-(NSString *)unit;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUnit:(NSString *)arg1 ;
-(void)setAttributedValue:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedValue;
-(void)setDateString:(NSString *)arg1 ;
-(NSString *)dateString;
-(BOOL)infoHidden;
-(void)setInfoHidden:(BOOL)arg1 ;
-(void)setMetricColors:(HKUIMetricColors *)arg1 ;
-(HKUIMetricColors *)metricColors;
-(void)setSelectedMetricColors:(HKUIMetricColors *)arg1 ;
-(HKUIMetricColors *)selectedMetricColors;
-(void)setValueContext:(NSString *)arg1 ;
-(BOOL)isEqualToContextItem:(id)arg1 ;
-(NSString *)valueContext;
@end

