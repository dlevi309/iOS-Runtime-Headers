/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFSearchResultHandler.h>
#import <libobjc.A.dylib/_MFFlushableMessageSetIterator.h>
#import <libobjc.A.dylib/EFCancelable.h>

@class NSMutableIndexSet, NSString;

@interface _MFPersistedMessageForwardingIterator : NSObject <MFSearchResultHandler, _MFFlushableMessageSetIterator, EFCancelable> {

	AB _cancelled;
	/*^block*/id _handler;
	NSMutableIndexSet* _messageSet;

}

@property (nonatomic,copy,readonly) id handler;                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * messageSet;              //@synthesize messageSet=_messageSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)handler;
-(void)cancel;
-(void)flush;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(BOOL)handleMessage:(id)arg1 ;
-(NSMutableIndexSet *)messageSet;
@end

