/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSMutableArray;

@interface IMDCarAutoReplierChatProperties : NSObject {

	NSMutableArray* _suppressedMessageIDs;
	BOOL _autoReplySent;
	BOOL _urgent;

}

@property (assign,nonatomic) BOOL autoReplySent;                       //@synthesize autoReplySent=_autoReplySent - In the implementation block
@property (assign,getter=isUrgent,nonatomic) BOOL urgent;              //@synthesize urgent=_urgent - In the implementation block
-(id)init;
-(void)dealloc;
-(void)addSuppressedMessage:(id)arg1 ;
-(id)popSuppressedMessages;
-(BOOL)autoReplySent;
-(void)setAutoReplySent:(BOOL)arg1 ;
-(BOOL)isUrgent;
-(void)setUrgent:(BOOL)arg1 ;
@end

