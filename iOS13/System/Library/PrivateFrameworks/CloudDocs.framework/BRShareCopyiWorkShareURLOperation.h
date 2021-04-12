/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(NSString *)appName;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(id)initWithShare:(id)arg1 documentType:(id)arg2 ;
-(void)setAppName:(NSString *)arg1 ;
-(id)shareCopyURLCompletionBlock;
-(void)setShareCopyURLCompletionBlock:(id)arg1 ;
-(id)initWithShare:(id)arg1 appName:(id)arg2 ;
@end

