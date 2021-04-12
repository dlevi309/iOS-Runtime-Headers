/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)stringForTimeInterval:(double)arg1 ;
+(id)numberFormatterWithSignificantDigits:(unsigned long long)arg1 ;
+(id)sharedFormatter;
+(id)multiplierForOrder:(long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringForTimeInterval:(double)arg1 ;
-(NSNumberFormatter *)numberFormatterWith3SigFigs;
-(NSNumberFormatter *)numberFormatterWith4SigFigs;
@end

