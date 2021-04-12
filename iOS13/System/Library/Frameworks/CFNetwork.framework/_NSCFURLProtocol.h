/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFURLProtocol : NSURLProtocol {

	CFURLProtocolRef _prot;
	NSCFURLProtocolClient* _client;

}
+(BOOL)canInitWithTask:(id)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(const InternalProtocolImplementation*)_cf_internalImpl;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 task:(id)arg2 ;
-(void)dealloc;
-(void)stopLoading;
-(void)startLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
@end

