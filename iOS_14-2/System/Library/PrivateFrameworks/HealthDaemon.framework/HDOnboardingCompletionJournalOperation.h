/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HDOnboardingCompletionJournalOperation : HDJournalEntry <NSSecureCoding> {

	NSArray* _codableOnboardingCompletions;
	long long _syncProvenance;

}
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)performOrJournalWithProfile:(id)arg1 error:(id*)arg2 ;
-(id)initWithCodableOnboardingCompletions:(id)arg1 syncProvenance:(long long)arg2 ;
@end

