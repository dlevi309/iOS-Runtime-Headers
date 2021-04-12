/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <CFNetwork/NSURLProtocol.h>

@class EFCancelationToken, MFMessageLoadingContext, EFPromise;

@interface MFMessageContentURLProtocol : NSURLProtocol {

	EFCancelationToken* _token;
	MFMessageLoadingContext* _loadingContext;
	EFPromise* _promise;

}

@property (readonly) EFCancelationToken * token;                            //@synthesize token=_token - In the implementation block
@property (readonly) MFMessageLoadingContext * loadingContext;              //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,retain) EFPromise * promise;                           //@synthesize promise=_promise - In the implementation block
+(void)initialize;
+(id)scheme;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)registry;
+(void)setRegistry:(id)arg1 ;
+(id)loadingContextForURL:(id)arg1 ;
+(id)URLForLoadingContext:(id)arg1 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(void)stopLoading;
-(EFPromise *)promise;
-(EFCancelationToken *)token;
-(void)setPromise:(EFPromise *)arg1 ;
-(MFMessageLoadingContext *)loadingContext;
-(void)dealloc;
-(void)_didLoadContentEvent:(id)arg1 error:(id)arg2 ;
-(id)_cachedResponseWithData:(id)arg1 error:(id*)arg2 ;
@end

