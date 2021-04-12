/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDPersistedMessageQueryIterator.h>
#import <libobjc.A.dylib/MFSearchResultHandler.h>
#import <libobjc.A.dylib/QueryProgressMonitor.h>
#import <libobjc.A.dylib/_MFFlushableMessageSetIterator.h>
#import <libobjc.A.dylib/EFCancelable.h>

@class NSMutableIndexSet, NSString;

@interface _MFMessagePersistenceQueryIterator : EDPersistedMessageQueryIterator <MFSearchResultHandler, QueryProgressMonitor, _MFFlushableMessageSetIterator, EFCancelable> {

	NSMutableIndexSet* _messageSet;

}

@property (nonatomic,retain) NSMutableIndexSet * messageSet;              //@synthesize messageSet=_messageSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleMessage:(id)arg1 ;
-(NSMutableIndexSet *)messageSet;
-(void)setMessageSet:(NSMutableIndexSet *)arg1 ;
@end

