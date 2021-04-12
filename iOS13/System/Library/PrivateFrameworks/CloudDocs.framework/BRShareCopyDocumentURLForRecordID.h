/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class CKRecordID;

@interface BRShareCopyDocumentURLForRecordID : BROperation {

	CKRecordID* _recordID;
	BOOL _withServerLookup;
	/*^block*/id _copyDocumentURLCompletionBlock;

}

@property (copy) id copyDocumentURLCompletionBlock;              //@synthesize copyDocumentURLCompletionBlock=_copyDocumentURLCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)copyDocumentURLCompletionBlock;
-(void)setCopyDocumentURLCompletionBlock:(id)arg1 ;
-(id)initWithRecordID:(id)arg1 withServerLookup:(BOOL)arg2 ;
@end

