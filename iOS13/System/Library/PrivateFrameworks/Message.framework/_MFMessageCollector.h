/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MessageConsumer.h>
#import <libobjc.A.dylib/QueryProgressMonitor.h>

@class NSMutableArray, MFActivityMonitor;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {

	NSMutableArray* _messages;
	MFActivityMonitor* _monitor;
	/*^block*/id _transmogrifier;

}

@property (nonatomic,copy) id transmogrifier;              //@synthesize transmogrifier=_transmogrifier - In the implementation block
-(id)init;
-(id)messages;
-(BOOL)shouldCancel;
-(void)newMessagesAvailable:(id)arg1 ;
-(id)copyMessages;
-(id)transmogrifier;
-(void)setTransmogrifier:(id)arg1 ;
@end

