/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSURL, ICFPSAPContext, ICStoreRequestContext;

@interface ICSAPSession : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSOperationQueue* _operationQueue;
	unsigned _sapVersion;
	NSURL* _certificateURL;
	NSURL* _setupURL;
	ICFPSAPContext* _sapContext;
	NSOperationQueue* _prepareFairPlayContextOperationQueue;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,readonly) NSOperationQueue * _prepareFairPlayContextOperationQueue;              //@synthesize prepareFairPlayContextOperationQueue=_prepareFairPlayContextOperationQueue - In the implementation block
@property (setter=_setSAPContext:,nonatomic,retain) ICFPSAPContext * _sapContext;                     //@synthesize sapContext=_sapContext - In the implementation block
@property (nonatomic,copy,readonly) NSURL * _certificateURL;                                          //@synthesize certificateURL=_certificateURL - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * _requestContext;                          //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy,readonly) NSURL * _setupURL;                                                //@synthesize setupURL=_setupURL - In the implementation block
@property (nonatomic,readonly) unsigned sapVersion;                                                   //@synthesize sapVersion=_sapVersion - In the implementation block
+(id)sharedSAPSessionWithVersion:(unsigned)arg1 URLBag:(id)arg2 requestContext:(id)arg3 ;
-(unsigned)sapVersion;
-(NSURL *)_setupURL;
-(void)verifySignatureData:(id)arg1 forData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(NSURL *)_certificateURL;
-(NSOperationQueue *)_prepareFairPlayContextOperationQueue;
-(id)_initWithVersion:(unsigned)arg1 certificateURL:(id)arg2 setupURL:(id)arg3 requestContext:(id)arg4 ;
-(void)signData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(ICStoreRequestContext *)_requestContext;
-(void)_setSAPContext:(id)arg1 ;
-(ICFPSAPContext *)_sapContext;
@end

