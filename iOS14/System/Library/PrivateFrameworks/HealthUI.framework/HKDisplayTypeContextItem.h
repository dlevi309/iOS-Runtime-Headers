/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, NSAttributedString, HKUIMetricColors;

@interface HKDisplayTypeContextItem : NSObject {

	BOOL _infoHidden;
	BOOL _useTightSpacingBetweenValueAndUnit;
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
@property (assign,nonatomic) BOOL useTightSpacingBetweenValueAndUnit;              //@synthesize useTightSpacingBetweenValueAndUnit=_useTightSpacingBetweenValueAndUnit - In the implementation block
@property (nonatomic,copy) NSString * unit;                                        //@synthesize unit=_unit - In the implementation block
@property (nonatomic,copy) NSString * value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * valueContext;                                //@synthesize valueContext=_valueContext - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedValue;                   //@synthesize attributedValue=_attributedValue - In the implementation block
@property (nonatomic,copy) NSString * dateString;                                  //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * metricColors;                      //@synthesize metricColors=_metricColors - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * selectedMetricColors;              //@synthesize selectedMetricColors=_selectedMetricColors - In the implementation block
-(void)setInfoHidden:(BOOL)arg1 ;
-(HKUIMetricColors *)metricColors;
-(void)setAttributedValue:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedValue;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(void)setSelectedMetricColors:(HKUIMetricColors *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)unit;
-(unsigned long long)hash;
-(NSString *)dateString;
-(void)setDateString:(NSString *)arg1 ;
-(void)setUnit:(NSString *)arg1 ;
-(void)setMetricColors:(HKUIMetricColors *)arg1 ;
-(NSString *)value;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUseTightSpacingBetweenValueAndUnit:(BOOL)arg1 ;
-(void)setValueContext:(NSString *)arg1 ;
-(NSString *)valueContext;
-(BOOL)useTightSpacingBetweenValueAndUnit;
-(HKUIMetricColors *)selectedMetricColors;
-(BOOL)isEqualToContextItem:(id)arg1 ;
-(BOOL)infoHidden;
@end

