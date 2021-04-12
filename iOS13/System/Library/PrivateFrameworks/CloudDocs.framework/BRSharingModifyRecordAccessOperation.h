/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingModifyRecordAccessOperation : BROperation {

	NSURL* _fileURL;
	BOOL _allowAccess;
	/*^block*/id _allowAccessCompletionBlock;
	/*^block*/id _accessAllowedCompletionBlock;

}

@property (copy) id allowAccessCompletionBlock;                //@synthesize allowAccessCompletionBlock=_allowAccessCompletionBlock - In the implementation block
@property (copy) id accessAllowedCompletionBlock;              //@synthesize accessAllowedCompletionBlock=_accessAllowedCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)allowAccessCompletionBlock;
-(void)setAllowAccessCompletionBlock:(id)arg1 ;
-(id)accessAllowedCompletionBlock;
-(void)setAccessAllowedCompletionBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 allowAccess:(BOOL)arg2 ;
@end

