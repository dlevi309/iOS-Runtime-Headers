/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSAPSession;

@interface ICSAPSessionPrepareFairPlayContextOperation : ICAsyncOperation {

	ICSAPSession* _sapSession;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) ICSAPSession * sapSession;              //@synthesize sapSession=_sapSession - In the implementation block
@property (nonatomic,copy) id responseHandler;                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(id)responseHandler;
-(ICSAPSession *)sapSession;
-(void)_exchangeDataWithSAPContext:(id)arg1 requestContext:(id)arg2 setupURL:(id)arg3 responseData:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setResponseHandler:(id)arg1 ;
-(void)setSapSession:(ICSAPSession *)arg1 ;
@end

