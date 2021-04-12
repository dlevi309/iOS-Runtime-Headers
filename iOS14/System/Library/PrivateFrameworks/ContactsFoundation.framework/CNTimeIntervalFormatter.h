/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface CNTimeIntervalFormatter : NSFormatter {

	NSNumberFormatter* _numberFormatterWith3SigFigs;
	NSNumberFormatter* _numberFormatterWith4SigFigs;

}

@property (nonatomic,readonly) NSNumberFormatter * numberFormatterWith3SigFigs;              //@synthesize numberFormatterWith3SigFigs=_numberFormatterWith3SigFigs - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * numberFormatterWith4SigFigs;              //@synthesize numberFormatterWith4SigFigs=_numberFormatterWith4SigFigs - In the implementation block
+(id)multiplierForOrder:(long long)arg1 ;
+(id)sharedFormatter;
+(id)numberFormatterWithSignificantDigits:(unsigned long long)arg1 ;
+(id)stringForTimeInterval:(double)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSNumberFormatter *)numberFormatterWith3SigFigs;
-(NSNumberFormatter *)numberFormatterWith4SigFigs;
-(id)stringForTimeInterval:(double)arg1 ;
@end

