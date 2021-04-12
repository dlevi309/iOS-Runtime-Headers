/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 ;
-(void)setEvictionCompletionBlock:(id)arg1 ;
-(id)description;
-(void)main;
-(id)evictionCompletionBlock;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

