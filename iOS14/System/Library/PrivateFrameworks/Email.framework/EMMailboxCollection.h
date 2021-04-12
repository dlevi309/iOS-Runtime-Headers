/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMCollection.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMMailboxRepository;

@interface EMMailboxCollection : EMCollection <NSSecureCoding>

@property (nonatomic,readonly) EMMailboxRepository * repository; 
+(BOOL)supportsSecureCoding;
-(id)initWithObjectID:(id)arg1 query:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 repository:(id)arg2 ;
-(void)setRepository:(EMMailboxRepository *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccount:(id)arg1 topLevelOnly:(BOOL)arg2 repository:(id)arg3 ;
-(EMMailboxRepository *)repository;
-(id)initWithAccount:(id)arg1 topLevelOnly:(BOOL)arg2 ;
@end

