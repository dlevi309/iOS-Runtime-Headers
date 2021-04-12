/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFBufferedQueue.h>

@class MFDAMailbox, MFDAMessageStore, MFMailMessageLibrary, MFActivityMonitor, MFError;

@interface _MFDAMSBasicConsumer : MFBufferedQueue {

	MFDAMailbox* mailbox;
	MFDAMessageStore* store;
	MFMailMessageLibrary* library;
	MFActivityMonitor* monitor;
	MFError* error;
	unsigned long long numNewMessages;

}

@property (nonatomic,retain) MFActivityMonitor * monitor; 
@property (nonatomic,retain) MFError * error; 
-(void)dealloc;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
-(MFActivityMonitor *)monitor;
-(void)setMonitor:(MFActivityMonitor *)arg1 ;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
@end

