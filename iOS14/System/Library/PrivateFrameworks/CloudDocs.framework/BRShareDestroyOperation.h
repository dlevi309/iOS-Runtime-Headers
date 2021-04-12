/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKShare *)share;
-(id)initWithShare:(id)arg1 ;
-(id)shareDestroyCompletionBlock;
-(void)setShareDestroyCompletionBlock:(id)arg1 ;
-(void)setShare:(CKShare *)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

