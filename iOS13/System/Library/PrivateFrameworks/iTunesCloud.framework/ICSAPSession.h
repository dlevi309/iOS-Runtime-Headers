/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(ICStoreRequestContext *)_requestContext;
-(NSURL *)_certificateURL;
-(ICFPSAPContext *)_sapContext;
-(unsigned)sapVersion;
-(NSURL *)_setupURL;
-(id)_initWithVersion:(unsigned)arg1 certificateURL:(id)arg2 setupURL:(id)arg3 requestContext:(id)arg4 ;
-(void)signData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)verifySignatureData:(id)arg1 forData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_setSAPContext:(id)arg1 ;
-(NSOperationQueue *)_prepareFairPlayContextOperationQueue;
@end

