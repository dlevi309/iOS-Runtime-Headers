/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)allowAccessCompletionBlock;
-(void)setAllowAccessCompletionBlock:(id)arg1 ;
-(id)accessAllowedCompletionBlock;
-(void)setAccessAllowedCompletionBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 allowAccess:(BOOL)arg2 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

