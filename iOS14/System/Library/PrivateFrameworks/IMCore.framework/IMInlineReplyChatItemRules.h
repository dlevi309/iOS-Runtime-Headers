/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItemRules.h>
#import <IMCore/IMChatItemRules.h>

@class NSString;

@interface IMInlineReplyChatItemRules : IMTranscriptChatItemRules <IMChatItemRules> {

	NSString* _threadIdentifier;
	NSString* _threadOriginatorMessageGUID;
	NSRange _threadOriginatorRange;

}

@property (nonatomic,copy) NSString * threadIdentifier;                         //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy) NSString * threadOriginatorMessageGUID;              //@synthesize threadOriginatorMessageGUID=_threadOriginatorMessageGUID - In the implementation block
@property (assign,nonatomic) NSRange threadOriginatorRange;                     //@synthesize threadOriginatorRange=_threadOriginatorRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)threadIdentifier;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(void)setThreadOriginatorMessageGUID:(NSString *)arg1 ;
-(void)setThreadOriginatorRange:(NSRange)arg1 ;
-(id)initWithChat:(id)arg1 threadIdentifier:(id)arg2 ;
-(BOOL)_supportsContiguousChatItems;
-(id)_chatItemsWithReplyCountsForNewChatItems:(id)arg1 messageItem:(id)arg2 ;
-(BOOL)_hasEarlierMessagesToLoad;
-(BOOL)_hasRecentMessagesToLoad;
-(id)_filteredChatItemsForNewChatItems:(id)arg1 ;
-(BOOL)_shouldAppendDateForItem:(id)arg1 previousItem:(id)arg2 ;
-(BOOL)_shouldAppendServiceForItem:(id)arg1 previousItem:(id)arg2 chatStyle:(unsigned char)arg3 ;
-(BOOL)_shouldShowReportSpamForChat:(id)arg1 withItems:(id)arg2 ;
-(BOOL)_shouldAppendReplyContextForItem:(id)arg1 previousItem:(id)arg2 chatStyle:(unsigned char)arg3 ;
-(BOOL)_shouldAppendReplyCountIfNeeded;
-(NSString *)threadOriginatorMessageGUID;
-(NSRange)threadOriginatorRange;
@end

