/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class SGStorageEvent, NSArray, SGStorageContact, SGStorageReminder;

@interface SGJournalEntry : NSObject {

	unsigned long long _operation;
	SGStorageEvent* _event;
	NSArray* _eventBatch;
	SGStorageContact* _contact;
	SGStorageReminder* _reminder;

}

@property (nonatomic,readonly) unsigned long long operation;              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) SGStorageEvent * event;                    //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) NSArray * eventBatch;                      //@synthesize eventBatch=_eventBatch - In the implementation block
@property (nonatomic,readonly) SGStorageContact * contact;                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) SGStorageReminder * reminder;              //@synthesize reminder=_reminder - In the implementation block
-(id)initWithOperation:(unsigned long long)arg1 ;
-(SGStorageContact *)contact;
-(id)init;
-(unsigned long long)operation;
-(id)description;
-(SGStorageEvent *)event;
-(SGStorageReminder *)reminder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOperation:(unsigned long long)arg1 event:(id)arg2 ;
-(id)initWithOperation:(unsigned long long)arg1 eventBatch:(id)arg2 ;
-(id)initWithOperation:(unsigned long long)arg1 contact:(id)arg2 ;
-(id)initWithOperation:(unsigned long long)arg1 reminder:(id)arg2 ;
-(BOOL)isEqualToJournalEntry:(id)arg1 ;
-(NSArray *)eventBatch;
@end

