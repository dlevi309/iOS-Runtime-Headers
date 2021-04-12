/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, REMFetchMetadata, REMFetchResultToken;

@interface REMFetchResult : NSObject <NSSecureCoding> {

	long long _type;
	long long _count;
	NSArray* _requestedObjectIDs;
	NSArray* _fetchedAccountStorages;
	NSArray* _fetchedListStorages;
	NSArray* _fetchedReminderStorages;
	REMFetchMetadata* _metadata;
	REMFetchResultToken* _fetchResultToken;

}

@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long count;                                   //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSArray * requestedObjectIDs;                      //@synthesize requestedObjectIDs=_requestedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSArray * fetchedAccountStorages;                  //@synthesize fetchedAccountStorages=_fetchedAccountStorages - In the implementation block
@property (nonatomic,readonly) NSArray * fetchedListStorages;                     //@synthesize fetchedListStorages=_fetchedListStorages - In the implementation block
@property (nonatomic,readonly) NSArray * fetchedReminderStorages;                 //@synthesize fetchedReminderStorages=_fetchedReminderStorages - In the implementation block
@property (nonatomic,readonly) REMFetchMetadata * metadata;                       //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) REMFetchResultToken * fetchResultToken;              //@synthesize fetchResultToken=_fetchResultToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(long long)count;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCount:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(REMFetchMetadata *)metadata;
-(id)initWithMetadata:(id)arg1 ;
-(NSArray *)fetchedAccountStorages;
-(NSArray *)fetchedListStorages;
-(NSArray *)requestedObjectIDs;
-(NSArray *)fetchedReminderStorages;
-(REMFetchResultToken *)fetchResultToken;
-(id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 requestedObjectIDs:(id)arg4 metadata:(id)arg5 ;
-(id)initWithAccountStorages:(id)arg1 ;
-(id)initWithListStorages:(id)arg1 ;
-(id)initWithReminderStorages:(id)arg1 ;
-(id)initWithRequestedObjectIDs:(id)arg1 ;
-(void)setFetchResultToken:(REMFetchResultToken *)arg1 ;
@end

