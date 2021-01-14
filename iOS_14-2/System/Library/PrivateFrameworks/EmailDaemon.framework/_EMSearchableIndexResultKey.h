/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDSearchableCriterion;
@class NSIndexSet;

@interface _EMSearchableIndexResultKey : NSObject {

	id<EDSearchableCriterion> _criterion;
	NSIndexSet* _mailboxIDs;

}

@property (nonatomic,retain) id<EDSearchableCriterion> criterion;              //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,copy) NSIndexSet * mailboxIDs;                            //@synthesize mailboxIDs=_mailboxIDs - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(NSIndexSet *)mailboxIDs;
-(id<EDSearchableCriterion>)criterion;
-(void)setCriterion:(id<EDSearchableCriterion>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMailboxIDs:(NSIndexSet *)arg1 ;
@end

