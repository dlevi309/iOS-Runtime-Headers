/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareProcessSubitems : BROperation {

	NSURL* _url;
	/*^block*/id _processSubitemsCompletionBlock;
	unsigned long long _maxSharedSubitemsBeforeFailure;
	unsigned long long _processType;

}

@property (copy) id processSubitemsCompletionBlock;                                          //@synthesize processSubitemsCompletionBlock=_processSubitemsCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned long long maxSharedSubitemsBeforeFailure;              //@synthesize maxSharedSubitemsBeforeFailure=_maxSharedSubitemsBeforeFailure - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)processSubitemsCompletionBlock;
-(void)setProcessSubitemsCompletionBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 processType:(unsigned long long)arg2 ;
-(unsigned long long)maxSharedSubitemsBeforeFailure;
-(void)setMaxSharedSubitemsBeforeFailure:(unsigned long long)arg1 ;
@end

