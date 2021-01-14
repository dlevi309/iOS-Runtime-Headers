/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSSet;


@protocol EMMailboxTypeResolver <NSObject>
@property (nonatomic,readonly) NSSet * allMailboxObjectIDs; 
@required
-(id)mailboxObjectIDsForMailboxType:(long long)arg1;
-(NSSet *)allMailboxObjectIDs;
-(long long)mailboxTypeForMailboxObjectID:(id)arg1;

@end

