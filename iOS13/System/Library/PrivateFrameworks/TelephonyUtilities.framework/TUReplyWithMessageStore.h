/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TUReplyWithMessageStore : NSObject
-(id)init;
-(void)dealloc;
-(int)count;
-(id)_defaultRepliesForSending:(BOOL)arg1 ;
-(id)customReplies;
-(id)_cannedRepliesForSending:(BOOL)arg1 ;
-(id)cannedReplies;
-(id)defaultReplies;
-(id)cannedReplyActionSheetOptions;
-(id)cannedRepliesForSending;
-(void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_handleMessagesStoreChanged;
@end

