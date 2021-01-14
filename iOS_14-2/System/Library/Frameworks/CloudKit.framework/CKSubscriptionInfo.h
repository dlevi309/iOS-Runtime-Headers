/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class CKSubscription, CKDatabase, CKContainer;

@interface CKSubscriptionInfo : NSObject {

	CKSubscription* _subscription;
	CKDatabase* _database;
	CKContainer* _container;
	/*^block*/id _handler;

}

@property (nonatomic,retain) CKSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) CKDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) CKContainer * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
-(void)setDatabase:(CKDatabase *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setSubscription:(CKSubscription *)arg1 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)description;
-(CKSubscription *)subscription;
-(unsigned long long)hash;
-(CKDatabase *)database;
-(id)handler;
-(CKContainer *)container;
-(BOOL)isEqual:(id)arg1 ;
@end

