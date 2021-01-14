/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSMutableArray;

@interface MRPendingMessageQueue : NSObject {

	NSMutableArray* _messages;
	NSMutableArray* _delayableMessages;
	unsigned long long _lowPriorityMessagesCount;
	unsigned long long _maxLowPriorityMessagesAllowed;

}
-(void)pop;
-(void)push:(id)arg1 ;
-(id)peek;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(void)dealloc;
@end

