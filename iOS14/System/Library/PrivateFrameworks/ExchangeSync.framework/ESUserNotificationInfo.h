/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/ExchangeSync
*/


@class NSString;

@interface ESUserNotificationInfo : NSObject {

	/*^block*/id _handler;
	NSString* _groupIdentifier;

}

@property (nonatomic,copy) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(void)setHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)handler;
@end

