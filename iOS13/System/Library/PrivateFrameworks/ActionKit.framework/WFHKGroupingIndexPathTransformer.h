/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)initWithGroupingOption:(long long)arg1 ;
-(long long)groupingOption;
-(void)setGroupingOption:(long long)arg1 ;
-(NSCalendar *)conversionCalendar;
-(void)setConversionCalendar:(NSCalendar *)arg1 ;
@end

