/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSMutableArray;

@interface MRPendingMessageQueue : NSObject {

	NSMutableArray* _messages;
	NSMutableArray* _delayableMessages;
	unsigned long long _lowPriorityMessagesCount;
	unsigned long long _maxLowPriorityMessagesAllowed;

}
-(void)dealloc;
-(id)peek;
-(void)push:(id)arg1 ;
-(void)pop;
-(void)_purge;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
@end

