/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestions/SGReminder.h>

@class SGDuplicateKey, SGStorageLocation, NSString;

@interface SGStorageReminder : SGReminder {

	SGDuplicateKey* _duplicateKey;
	SGStorageLocation* _dueStorageLocation;
	NSString* _sourceKey;

}

@property (nonatomic,readonly) SGDuplicateKey * duplicateKey;                       //@synthesize duplicateKey=_duplicateKey - In the implementation block
@property (nonatomic,readonly) SGStorageLocation * dueStorageLocation;              //@synthesize dueStorageLocation=_dueStorageLocation - In the implementation block
@property (nonatomic,readonly) NSString * sourceKey;                                //@synthesize sourceKey=_sourceKey - In the implementation block
+(id)storageReminderFromRecordId:(id)arg1 store:(id)arg2 ;
+(id)storageReminderFromEntity:(id)arg1 store:(id)arg2 ;
+(id)storageReminderFromDuplicateKey:(id)arg1 store:(id)arg2 ;
+(id)storageReminderFromEntity:(id)arg1 origin:(id)arg2 ;
+(id)storageReminderWithPrimaryKey:(long long)arg1 store:(id)arg2 ;
-(SGDuplicateKey *)duplicateKey;
-(id)description;
-(id)loggingIdentifier;
-(unsigned long long)hash;
-(NSString *)sourceKey;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 duplicateKey:(id)arg2 sourceKey:(id)arg3 origin:(id)arg4 dueDate:(id)arg5 dueLocationType:(unsigned char)arg6 dueLocation:(id)arg7 dueLocationTrigger:(unsigned char)arg8 title:(id)arg9 reminderStatus:(unsigned char)arg10 contactIdentifier:(id)arg11 creationDate:(id)arg12 ;
-(BOOL)isEqualToStorageReminder:(id)arg1 ;
-(id)toReminder;
-(long long)commitWithStore:(id)arg1 ;
-(SGStorageLocation *)dueStorageLocation;
@end

