/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ENNoteStoreClient.h>

@protocol ENLinkedNoteStoreClientDelegate;
@class ENLinkedNotebookRef;

@interface ENLinkedNoteStoreClient : ENNoteStoreClient {

	id<ENLinkedNoteStoreClientDelegate> _delegate;
	ENLinkedNotebookRef* _linkedNotebookRef;

}

@property (nonatomic,retain) ENLinkedNotebookRef * linkedNotebookRef;                          //@synthesize linkedNotebookRef=_linkedNotebookRef - In the implementation block
@property (assign,nonatomic,__weak) id<ENLinkedNoteStoreClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)noteStoreClientForLinkedNotebookRef:(id)arg1 ;
-(id<ENLinkedNoteStoreClientDelegate>)delegate;
-(void)setDelegate:(id<ENLinkedNoteStoreClientDelegate>)arg1 ;
-(id)authenticationToken;
-(id)noteStoreUrl;
-(ENLinkedNotebookRef *)linkedNotebookRef;
-(void)setLinkedNotebookRef:(ENLinkedNotebookRef *)arg1 ;
@end

