/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSIndexSet *)mailboxIDs;
-(id<EDSearchableCriterion>)criterion;
-(void)setCriterion:(id<EDSearchableCriterion>)arg1 ;
-(void)setMailboxIDs:(NSIndexSet *)arg1 ;
@end

