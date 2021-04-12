/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <Foundation/NSOperationQueue.h>

@interface ICAttachmentPreviewGeneratorOperationQueue : NSOperationQueue {

	unsigned long long _suspendCount;

}

@property (assign,nonatomic) unsigned long long suspendCount;              //@synthesize suspendCount=_suspendCount - In the implementation block
-(void)resume;
-(void)suspend;
-(unsigned long long)suspendCount;
-(void)setSuspendCount:(unsigned long long)arg1 ;
-(void)cancelOperationsForAttachment:(id)arg1 ;
@end

