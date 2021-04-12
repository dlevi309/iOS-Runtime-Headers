/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 ;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSURL *)url;
-(NSString *)title;
-(BOOL)isEqualToAction:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 ;
@end

