/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(EFCancelationToken *)token;
-(EFPromise *)promise;
-(void)setPromise:(EFPromise *)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(MFMessageLoadingContext *)loadingContext;
-(void)_didLoadContentEvent:(id)arg1 error:(id)arg2 ;
-(id)_cachedResponseWithData:(id)arg1 error:(id*)arg2 ;
@end

