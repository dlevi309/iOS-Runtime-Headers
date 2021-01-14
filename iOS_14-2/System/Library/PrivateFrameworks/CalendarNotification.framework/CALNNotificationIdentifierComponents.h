/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString;

@interface CALNNotificationIdentifierComponents : NSObject {

	NSString* _sourceIdentifier;
	NSString* _sourceClientIdentifier;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceClientIdentifier;              //@synthesize sourceClientIdentifier=_sourceClientIdentifier - In the implementation block
-(NSString *)sourceClientIdentifier;
-(id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(id)description;
-(NSString *)sourceIdentifier;
@end

