/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriContext.h>

@class NSDictionary, BBBulletin, UNNotification;

@interface SiriDirectActionContext : SiriContext {

	NSDictionary* _payload;
	BBBulletin* _bulletin;
	UNNotification* _notification;

}

@property (nonatomic,readonly) NSDictionary * payload;                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BBBulletin * bulletin;                      //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) UNNotification * notification;              //@synthesize notification=_notification - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UNNotification *)notification;
-(id)initWithPayload:(id)arg1 ;
-(id)bundleId;
-(NSDictionary *)payload;
-(id)initWithUNNotification:(id)arg1 ;
-(BBBulletin *)bulletin;
-(long long)directActionEvent;
-(id)initWithBBBulletin:(id)arg1 ;
-(BOOL)isMessagingDirectAction;
@end

