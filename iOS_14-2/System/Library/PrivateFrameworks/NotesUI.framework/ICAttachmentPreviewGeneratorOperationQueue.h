/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <Foundation/NSOperationQueue.h>

@interface ICAttachmentPreviewGeneratorOperationQueue : NSOperationQueue {

	unsigned long long _suspendCount;

}

@property (assign,nonatomic) unsigned long long suspendCount;              //@synthesize suspendCount=_suspendCount - In the implementation block
-(void)suspend;
-(unsigned long long)suspendCount;
-(void)setSuspendCount:(unsigned long long)arg1 ;
-(void)resume;
-(void)cancelOperationsForAttachment:(id)arg1 ;
@end

