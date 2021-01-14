/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TUReplyWithMessageStore : NSObject
-(id)init;
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
-(void)dealloc;
@end

