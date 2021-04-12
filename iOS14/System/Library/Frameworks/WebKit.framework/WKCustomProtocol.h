/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface WKCustomProtocol : NSURLProtocol {

	ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> _customProtocolID;
	RetainPtr<__CFRunLoop *>* _initializationRunLoop;

}

@property (nonatomic,readonly) ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> customProtocolID;              //@synthesize customProtocolID=_customProtocolID - In the implementation block
@property (nonatomic,readonly) CFRunLoopRef initializationRunLoop; 
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(void)stopLoading;
-(ObjectIdentifier<WebKit::LegacyCustomProtocolIDType>)customProtocolID;
-(CFRunLoopRef)initializationRunLoop;
@end

