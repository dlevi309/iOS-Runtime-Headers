/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)copyDocumentURLCompletionBlock;
-(void)setCopyDocumentURLCompletionBlock:(id)arg1 ;
-(id)initWithRecordID:(id)arg1 withServerLookup:(BOOL)arg2 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

