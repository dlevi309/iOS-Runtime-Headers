/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareSaveOperation : BROperation {

	CKShare* _share;
	/*^block*/id _shareSaveCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;              //@synthesize share=_share - In the implementation block
@property (copy) id shareSaveCompletionBlock;              //@synthesize shareSaveCompletionBlock=_shareSaveCompletionBlock - In the implementation block
+(BOOL)shouldRetryShareSaveOnError:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(id)initWithShare:(id)arg1 ;
-(void)setShareSaveCompletionBlock:(id)arg1 ;
-(id)shareSaveCompletionBlock;
@end

