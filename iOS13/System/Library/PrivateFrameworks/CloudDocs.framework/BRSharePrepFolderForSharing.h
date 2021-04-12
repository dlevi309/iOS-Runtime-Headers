/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharePrepFolderForSharing : BROperation {

	NSURL* _url;
	/*^block*/id _prepFolderSharingCompletionBlock;

}

@property (copy) id prepFolderSharingCompletionBlock;              //@synthesize prepFolderSharingCompletionBlock=_prepFolderSharingCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)prepFolderSharingCompletionBlock;
-(void)setPrepFolderSharingCompletionBlock:(id)arg1 ;
@end

