/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKCharacteristicType;

@interface _HDSetCharacteristicJournalEntry : HDJournalEntry {

	id _value;
	HKCharacteristicType* _dataType;

}

@property (nonatomic,readonly) id value;                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) HKCharacteristicType * dataType;              //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(HKCharacteristicType *)dataType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
@end

