/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

