/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation {

	CKShare* _share;
	NSString* _appName;
	/*^block*/id _shareCopyURLCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
@property (copy) id shareCopyURLCompletionBlock;              //@synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock - In the implementation block
+(id)iWorkShareableExtensions;
-(CKShare *)share;
-(id)initWithShare:(id)arg1 appName:(id)arg2 ;
-(id)initWithShare:(id)arg1 documentType:(id)arg2 ;
-(id)shareCopyURLCompletionBlock;
-(void)setShareCopyURLCompletionBlock:(id)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setShare:(CKShare *)arg1 ;
-(void)main;
-(NSString *)appName;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

