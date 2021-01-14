/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFURLProtocol : NSURLProtocol {

	CFURLProtocolRef _prot;
	NSCFURLProtocolClient* _client;

}
+(id)canonicalRequestForRequest:(id)arg1 task:(id)arg2 ;
+(BOOL)canInitWithTask:(id)arg1 ;
+(const InternalProtocolImplementation*)_cf_internalImpl;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(void)stopLoading;
-(void)dealloc;
@end

