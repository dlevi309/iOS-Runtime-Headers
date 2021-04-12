/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSURLProtocolInternal, NSURLRequest, NSCachedURLResponse;

@interface NSURLProtocol : NSObject {

	NSURLProtocolInternal* _internal;

}

@property (retain,readonly) id<NSURLProtocolClient> client; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSCachedURLResponse * cachedResponse; 
+(Class)_protocolClassForRequest:(id)arg1 ;
+(BOOL)canInitWithTask:(id)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 task:(id)arg2 ;
+(BOOL)registerClass:(Class)arg1 ;
+(void)unregisterClass:(Class)arg1 ;
+(id)propertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3 ;
+(void)removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(Class)_protocolClassForRequest:(id)arg1 skipAppSSO:(BOOL)arg2 ;
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<NSURLProtocolClient>)client;
-(NSURLRequest *)request;
-(void)stopLoading;
-(void)startLoading;
-(id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(NSCachedURLResponse *)cachedResponse;
@end

