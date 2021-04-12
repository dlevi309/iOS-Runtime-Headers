/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSURLProtocolInternal, NSURLRequest, NSCachedURLResponse;

@interface NSURLProtocol : NSObject {

	NSURLProtocolInternal* _internal;

}

@property (retain,readonly) id<NSURLProtocolClient> client; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSCachedURLResponse * cachedResponse; 
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1 ;
+(Class)_protocolClassForRequest:(id)arg1 skipAppSSO:(BOOL)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 task:(id)arg2 ;
+(BOOL)canInitWithTask:(id)arg1 ;
+(id)propertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(void)unregisterClass:(Class)arg1 ;
+(Class)_protocolClassForRequest:(id)arg1 ;
+(void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3 ;
+(void)removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(BOOL)registerClass:(Class)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(id<NSURLProtocolClient>)client;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id)init;
-(void)startLoading;
-(NSURLRequest *)request;
-(void)stopLoading;
-(NSCachedURLResponse *)cachedResponse;
-(void)dealloc;
@end

