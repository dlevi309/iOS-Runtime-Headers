/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetResourceLoaderRequest.h>

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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isCancelled;
-(BOOL)finished;
-(BOOL)isFinished;
-(NSURLRequest *)request;
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(AVAssetResourceLoadingRequestor *)requestor;
-(unsigned long long)_requestID;
-(id)_resourceLoader;
-(id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(AVAssetResourceLoadingDataRequest *)dataRequest;
-(void)finishLoading;
-(AVAssetResourceLoadingContentInformationRequest *)contentInformationRequest;
-(void)finishLoadingWithError:(id)arg1 ;
-(id)_weakReference;
-(CFDictionaryRef)_requestInfo;
-(void)_performCancellationByClient;
-(BOOL)_shouldInformDelegateOfFigCancellation;
-(id)initWithResourceLoader:(id)arg1 requestInfo:(CFDictionaryRef)arg2 requestID:(unsigned long long)arg3 ;
-(OpaqueFigCustomURLHandlerRef)_customURLHandler;
-(OpaqueFigCustomURLLoaderRef)_customURLLoader;
-(OpaqueFigCustomURLHandlerRef)_contentKeySessionCustomURLHandler;
-(void)_sendDataToCustomURLHandler:(id)arg1 ;
-(void)_appendToCachedData:(id)arg1 ;
-(NSURLRequest *)redirect;
-(id)initWithResourceLoader:(id)arg1 URL:(id)arg2 httpRequestHeaders:(id)arg3 requestOffset:(id)arg4 requestLength:(id)arg5 allowedContentTypes:(id)arg6 figCryptor:(OpaqueFigCPECryptorRef)arg7 cryptorKeyRequestID:(unsigned long long)arg8 ;
-(void)_setContentInformationRequest:(id)arg1 ;
-(void)_setDataRequest:(id)arg1 ;
-(BOOL)_tryToMarkAsCancelled;
-(BOOL)_isRequestForContentKey;
-(BOOL)_canSetOrUseCachedContentInformation;
-(void)_sendResponseInfoToCustomURLHandler;
-(void)_ensureResponseInfoSentToCustomURLHandler;
-(void)_cacheContentInformation:(id)arg1 ;
-(void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1 ;
-(BOOL)_contentKeySessionIsAttached;
-(void)forwardRequestToContentKeySession;
-(id)_getAndClearCachedData;
-(void)_sendFinishLoadingToCustomURLHandler;
-(void)setRedirect:(NSURLRequest *)arg1 ;
-(id)keyRequestDataUsingCryptorForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 performAsync:(BOOL)arg4 error:(id*)arg5 ;
-(id)serializableRepresentation;
-(void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3 ;
-(void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)persistentContentKeyFromKeyVendorResponse:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

