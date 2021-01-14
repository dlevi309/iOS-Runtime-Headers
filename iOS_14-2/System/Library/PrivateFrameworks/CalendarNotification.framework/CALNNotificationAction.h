/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, NSURL;

@interface CALNNotificationAction : NSObject {

	NSString* _identifier;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 ;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 ;
-(BOOL)isEqualToAction:(id)arg1 ;
-(NSURL *)url;
-(id)description;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

