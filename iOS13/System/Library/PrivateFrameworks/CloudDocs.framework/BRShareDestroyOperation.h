/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareDestroyOperation : BROperation {

	CKShare* _share;
	/*^block*/id _shareDestroyCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
@property (copy) id shareDestroyCompletionBlock;              //@synthesize shareDestroyCompletionBlock=_shareDestroyCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(id)initWithShare:(id)arg1 ;
-(id)shareDestroyCompletionBlock;
-(void)setShareDestroyCompletionBlock:(id)arg1 ;
@end

