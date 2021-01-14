/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSArray;

@interface SSVFamilyContentDeletionEvent : NSObject {

	NSArray* _deletedAccounts;

}

@property (nonatomic,readonly) NSArray * deletedAccounts;              //@synthesize deletedAccounts=_deletedAccounts - In the implementation block
+(void)postDistributedNotificationWithAccountPairs:(id)arg1 ;
+(id)notificationPayloadWithAccountPairs:(id)arg1 ;
-(NSArray *)deletedAccounts;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(id)initWithXPCEventStreamEvent:(id)arg1 ;
@end

