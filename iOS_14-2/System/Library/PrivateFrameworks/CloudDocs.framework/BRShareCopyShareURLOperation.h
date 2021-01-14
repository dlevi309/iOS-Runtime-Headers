/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class CKShare, NSString, NSError;

@interface BRShareCopyShareURLOperation : BROperation {

	CKShare* _share;
	NSString* _appName;
	NSError* _error;
	/*^block*/id _shareCopyURLCompletionBlock;
	/*^block*/id _copyShareURLCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
@property (copy) id shareCopyURLCompletionBlock;              //@synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock - In the implementation block
@property (copy) id copyShareURLCompletionBlock;              //@synthesize copyShareURLCompletionBlock=_copyShareURLCompletionBlock - In the implementation block
-(CKShare *)share;
-(id)initWithShare:(id)arg1 documentType:(id)arg2 ;
-(id)shareCopyURLCompletionBlock;
-(void)setShareCopyURLCompletionBlock:(id)arg1 ;
-(id)_initWithShare:(id)arg1 documentType:(id)arg2 ;
-(id)copyShareURLCompletionBlock;
-(void)setCopyShareURLCompletionBlock:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 documentType:(id)arg2 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setShare:(CKShare *)arg1 ;
-(void)main;
-(NSString *)appName;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

