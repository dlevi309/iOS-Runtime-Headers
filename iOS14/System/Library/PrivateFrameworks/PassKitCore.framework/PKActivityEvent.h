/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSDate;

@interface PKActivityEvent : NSObject {

	BOOL _unread;
	NSString* _eventType;
	NSString* _identifier;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * eventType;                     //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (getter=isUnread,nonatomic,readonly) BOOL unread;              //@synthesize unread=_unread - In the implementation block
+(id)eventsWithTransactions:(id)arg1 ;
-(NSString *)eventType;
-(BOOL)isUnread;
-(unsigned long long)hash;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 date:(id)arg2 unread:(BOOL)arg3 ;
-(NSDate *)date;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

