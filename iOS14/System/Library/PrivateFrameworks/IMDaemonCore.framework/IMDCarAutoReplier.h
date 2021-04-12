/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDAutoReplying.h>

@protocol IMDAutoReplyDelegate, OS_dispatch_queue;
@class NSObject, CARAutomaticDNDStatus, NSMutableDictionary, NSString;

@interface IMDCarAutoReplier : NSObject <IMDAutoReplying> {

	id<IMDAutoReplyDelegate> _replyDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	CARAutomaticDNDStatus* _automaticDNDStatus;
	NSMutableDictionary* _propertiesForChatIdentifiers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CARAutomaticDNDStatus * automaticDNDStatus;                        //@synthesize automaticDNDStatus=_automaticDNDStatus - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * propertiesForChatIdentifiers;              //@synthesize propertiesForChatIdentifiers=_propertiesForChatIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) id<IMDAutoReplyDelegate> replyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isActive;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)setReplyDelegate:(id<IMDAutoReplyDelegate>)arg1 ;
-(void)_updateDNDStatus;
-(CARAutomaticDNDStatus *)automaticDNDStatus;
-(NSMutableDictionary *)propertiesForChatIdentifiers;
-(BOOL)_favoritesContainsParticipants:(id)arg1 ;
-(BOOL)_hasRecentOutgoingMessagesInChat:(id)arg1 ;
-(BOOL)_contactsContainsParticipants:(id)arg1 ;
-(unsigned long long)_autoReplyAudiencePreference;
-(BOOL)_urgentTriggerMatchInText:(id)arg1 ;
-(id)_propertiesForChat:(id)arg1 ;
-(BOOL)_audience:(unsigned long long)arg1 allowsRepliesToChat:(id)arg2 ;
-(id)_customizedAutoReplyMessage;
-(void)_handleGeneratedAutoReplyText:(id)arg1 forChat:(id)arg2 ;
-(void)_handleReceivedUrgentRequestForMessages:(id)arg1 ;
-(void)processMessages:(id)arg1 inChat:(id)arg2 ;
-(id<IMDAutoReplyDelegate>)replyDelegate;
-(void)setAutomaticDNDStatus:(CARAutomaticDNDStatus *)arg1 ;
@end

