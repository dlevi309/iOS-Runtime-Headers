/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetResourceLoaderRequest.h>

@class AVAssetResourceLoadingRequestInternal, NSURLRequest, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, NSURLResponse, AVAssetResourceLoadingRequestor, NSString;

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest> {

	AVAssetResourceLoadingRequestInternal* _loadingRequest;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) AVAssetResourceLoadingContentInformationRequest * contentInformationRequest; 
@property (nonatomic,readonly) AVAssetResourceLoadingDataRequest * dataRequest; 
@property (nonatomic,copy) NSURLResponse * response; 
@property (nonatomic,copy) NSURLRequest * redirect; 
@property (nonatomic,readonly) AVAssetResourceLoadingRequestor * requestor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SEL)_selectorForInformingDelegateOfCancellationByFig;
-(void)_performCancellationByClient;
-(unsigned long long)_requestID;
-(void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)finished;
-(id)init;
-(NSURLRequest *)redirect;
-(id)initWithResourceLoader:(id)arg1 URL:(id)arg2 httpRequestHeaders:(id)arg3 requestOffset:(id)arg4 requestLength:(id)arg5 allowedContentTypes:(id)arg6 figCryptor:(OpaqueFigCPECryptorRef)arg7 cryptorKeyRequestID:(unsigned long long)arg8 ;
-(BOOL)isFinished;
-(id)_resourceLoader;
-(NSURLRequest *)request;
-(void)setRedirect:(NSURLRequest *)arg1 ;
-(OpaqueFigCustomURLHandlerRef)_customURLHandler;
-(NSString *)description;
-(OpaqueFigCustomURLLoaderRef)_customURLLoader;
-(id)initWithResourceLoader:(id)arg1 requestInfo:(CFDictionaryRef)arg2 requestID:(unsigned long long)arg3 ;
-(OpaqueFigCustomURLHandlerRef)_contentKeySessionCustomURLHandler;
-(void)_sendDataToCustomURLHandler:(id)arg1 ;
-(void)_appendToCachedData:(id)arg1 ;
-(AVAssetResourceLoadingContentInformationRequest *)contentInformationRequest;
-(void)_setContentInformationRequest:(id)arg1 ;
-(void)_setDataRequest:(id)arg1 ;
-(BOOL)_tryToMarkAsCancelled;
-(BOOL)_isRequestForContentKey;
-(BOOL)_canSetOrUseCachedContentInformation;
-(void)_sendResponseInfoToCustomURLHandler;
-(void)_cacheContentInformation:(id)arg1 ;
-(void)_ensureResponseInfoSentToCustomURLHandler;
-(void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1 ;
-(BOOL)_contentKeySessionIsAttached;
-(void)forwardRequestToContentKeySession;
-(id)_getAndClearCachedData;
-(void)_sendFinishLoadingToCustomURLHandler;
-(id)serializableRepresentation;
-(id)keyRequestDataUsingCryptorForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 performAsync:(BOOL)arg4 error:(id*)arg5 ;
-(void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3 ;
-(id)persistentContentKeyFromKeyVendorResponse:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)finishLoading;
-(AVAssetResourceLoadingDataRequest *)dataRequest;
-(void)finishLoadingWithError:(id)arg1 ;
-(id)_weakReference;
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(CFDictionaryRef)_requestInfo;
-(AVAssetResourceLoadingRequestor *)requestor;
-(BOOL)_shouldInformDelegateOfFigCancellation;
-(BOOL)isCancelled;
-(void)dealloc;
@end

