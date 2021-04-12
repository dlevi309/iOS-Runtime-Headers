/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKShare *)share;
-(id)initWithShare:(id)arg1 ;
-(void)setShareSaveCompletionBlock:(id)arg1 ;
-(id)shareSaveCompletionBlock;
-(void)setShare:(CKShare *)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

