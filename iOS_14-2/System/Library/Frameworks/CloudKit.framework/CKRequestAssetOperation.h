/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <Foundation/NSOperation.h>

@class CKUploadRequestMetadata;

@interface CKRequestAssetOperation : NSOperation {

	long long _state;
	CKUploadRequestMetadata* _metadata;
	/*^block*/id _assetRequestCompletionBlock;
	/*^block*/id _requestCallback;

}

@property (nonatomic,retain) CKUploadRequestMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) id requestCallback;                                //@synthesize requestCallback=_requestCallback - In the implementation block
@property (assign) long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id assetRequestCompletionBlock;                    //@synthesize assetRequestCompletionBlock=_assetRequestCompletionBlock - In the implementation block
-(void)setRequestCallback:(id)arg1 ;
-(void)start;
-(id)initWithAssetMetadata:(id)arg1 requestCallback:(/*^block*/id)arg2 ;
-(void)setAssetRequestCompletionBlock:(id)arg1 ;
-(BOOL)isAsynchronous;
-(id)assetRequestCompletionBlock;
-(BOOL)isFinished;
-(void)setMetadata:(CKUploadRequestMetadata *)arg1 ;
-(void)setState:(long long)arg1 ;
-(BOOL)isExecuting;
-(long long)state;
-(id)requestCallback;
-(CKUploadRequestMetadata *)metadata;
@end

