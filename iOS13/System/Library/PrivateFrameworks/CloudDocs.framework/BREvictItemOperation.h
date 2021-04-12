/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BREvictItemOperation : BROperation {

	unsigned long long _section;
	NSURL* _url;
	/*^block*/id _evictionCompletionBlock;

}

@property (copy) id evictionCompletionBlock;              //@synthesize evictionCompletionBlock=_evictionCompletionBlock - In the implementation block
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setEvictionCompletionBlock:(id)arg1 ;
-(id)evictionCompletionBlock;
@end

