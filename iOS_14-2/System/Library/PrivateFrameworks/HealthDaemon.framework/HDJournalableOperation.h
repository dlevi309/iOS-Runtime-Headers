/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HDJournalableOperation : HDJournalEntry <NSSecureCoding> {

	BOOL _didJournal;

}

@property (nonatomic,readonly) BOOL didJournal;              //@synthesize didJournal=_didJournal - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)performOrJournalWithProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)didJournal;
@end

