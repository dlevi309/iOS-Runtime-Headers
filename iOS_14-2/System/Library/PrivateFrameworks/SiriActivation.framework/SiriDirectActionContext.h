/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)messageComposeNewThreadDirectActionWithAppBundleId:(id)arg1 fullName:(id)arg2 phoneOrEmailAddress:(id)arg3 ;
+(id)messageReadDirectActionWithAppBundleId:(id)arg1 conversationGUID:(id)arg2 ;
+(id)messageReplyDirectActionWithAppBundleId:(id)arg1 conversationGUID:(id)arg2 ;
+(id)messageAmbiguousDirectActionWithAppBundleId:(id)arg1 ;
+(id)messageComposeDirectActionWithAppBundleId:(id)arg1 ;
+(id)mapSearchDirectActionWithAppBundleId:(id)arg1 ;
+(id)musicSearchDirectActionWithAppBundleId:(id)arg1 ;
+(id)phoneAmbiguousDirectActionWithAppBundleId:(id)arg1 ;
+(id)phoneCallDirectActionWithAppBundleId:(id)arg1 ;
-(UNNotification *)notification;
-(id)initWithPayload:(id)arg1 ;
-(id)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)payload;
-(BBBulletin *)bulletin;
-(id)description;
-(id)initWithUNNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)directActionEvent;
-(id)_intentIdentifiersFromBulletin:(id)arg1 notification:(id)arg2 ;
-(id)_initWithDirectActionEvent:(long long)arg1 appBundleId:(id)arg2 conversationGUID:(id)arg3 fullName:(id)arg4 phoneOrEmailAddress:(id)arg5 ;
-(id)initWithBBBulletin:(id)arg1 ;
-(BOOL)isMessagingDirectAction;
@end

