/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMCollection.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMMailboxRepository;

@interface EMMailboxCollection : EMCollection <NSSecureCoding>

@property (nonatomic,readonly) EMMailboxRepository * repository; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(EMMailboxRepository *)repository;
-(id)initWithObjectID:(id)arg1 query:(id)arg2 ;
-(void)setRepository:(EMMailboxRepository *)arg1 ;
-(id)initWithMailbox:(id)arg1 repository:(id)arg2 ;
-(id)initWithAccount:(id)arg1 topLevelOnly:(BOOL)arg2 repository:(id)arg3 ;
-(id)initWithAccount:(id)arg1 topLevelOnly:(BOOL)arg2 ;
@end

