/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IMDAutoReplyDelegate> replyDelegate; 
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)_isActive;
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

