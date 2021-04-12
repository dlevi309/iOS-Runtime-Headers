/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString;

@interface PPQuickTypeLabeledValue : NSObject {

	unsigned _fields;
	NSString* _label;
	NSString* _value;
	double _scoreBoost;

}

@property (nonatomic,readonly) NSString * label;               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double scoreBoost;              //@synthesize scoreBoost=_scoreBoost - In the implementation block
@property (nonatomic,readonly) unsigned fields;                //@synthesize fields=_fields - In the implementation block
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned)arg4 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
-(unsigned)fields;
-(id)initWithLabel:(id)arg1 value:(id)arg2 scoreBoost:(double)arg3 fields:(unsigned)arg4 ;
-(double)scoreBoost;
-(NSString *)label;
-(NSString *)value;
@end

