/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURLConnection, NSString;

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {

	WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::EmptyCounter>* _customProtocolManagerProxy;
	ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> _customProtocolID;
	unsigned long long _storagePolicy;
	NSURLConnection* _urlConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)initWithLegacyCustomProtocolManagerProxy:(LegacyCustomProtocolManagerProxy*)arg1 customProtocolID:(ObjectIdentifier<WebKit::LegacyCustomProtocolIDType>)arg2 request:(id)arg3 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

