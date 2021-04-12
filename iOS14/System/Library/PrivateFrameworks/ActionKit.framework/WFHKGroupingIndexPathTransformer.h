/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Foundation/NSValueTransformer.h>

@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer {

	long long _groupingOption;
	NSCalendar* _conversionCalendar;

}

@property (assign,nonatomic) long long groupingOption;                     //@synthesize groupingOption=_groupingOption - In the implementation block
@property (nonatomic,retain) NSCalendar * conversionCalendar;              //@synthesize conversionCalendar=_conversionCalendar - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)init;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(id)initWithGroupingOption:(long long)arg1 ;
-(long long)groupingOption;
-(void)setGroupingOption:(long long)arg1 ;
-(NSCalendar *)conversionCalendar;
-(void)setConversionCalendar:(NSCalendar *)arg1 ;
@end

