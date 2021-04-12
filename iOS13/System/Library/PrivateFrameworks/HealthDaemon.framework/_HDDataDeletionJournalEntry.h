/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry {

	BOOL _restrictSource;
	HKObject* _dataObject;

}

@property (nonatomic,readonly) HKObject * dataObject;              //@synthesize dataObject=_dataObject - In the implementation block
@property (nonatomic,readonly) BOOL restrictSource;                //@synthesize restrictSource=_restrictSource - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKObject *)dataObject;
-(id)initWithDataObject:(id)arg1 restrictSource:(BOOL)arg2 ;
-(BOOL)restrictSource;
@end

