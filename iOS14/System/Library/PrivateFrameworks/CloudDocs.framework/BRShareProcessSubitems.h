/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 processType:(unsigned long long)arg2 ;
-(id)processSubitemsCompletionBlock;
-(void)setProcessSubitemsCompletionBlock:(id)arg1 ;
-(unsigned long long)maxSharedSubitemsBeforeFailure;
-(void)setMaxSharedSubitemsBeforeFailure:(unsigned long long)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

