/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSItemProvider, VSAuditToken, VSOptional, NSURLSessionTask;

@interface VSImageLoadOperation : VSAsyncOperation {

	NSItemProvider* _itemProvider;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSURLSessionTask* _task;
	CGSize _preferredImageSize;

}

@property (nonatomic,retain) VSOptional * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                      //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,readonly) CGSize preferredImageSize;                  //@synthesize preferredImageSize=_preferredImageSize - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(NSURLSessionTask *)task;
-(void)executionDidBegin;
-(id)init;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSItemProvider *)itemProvider;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)cancel;
-(CGSize)preferredImageSize;
-(id)initWithItemProvider:(id)arg1 preferredImageSize:(CGSize)arg2 ;
-(void)_finishWithImageData:(id)arg1 orError:(id)arg2 ;
-(void)_beginFetchingDataFromURL:(id)arg1 ;
@end

