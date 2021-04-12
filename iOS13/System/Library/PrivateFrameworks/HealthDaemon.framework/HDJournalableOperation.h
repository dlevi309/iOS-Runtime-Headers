/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

