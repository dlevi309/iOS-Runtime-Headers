/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding> {

	ObjectIdentifier<WebKit::WebPageProxyIdentifierType> _pageProxyID;
	ObjectIdentifier<WebCore::PageIdentifierType> _webPageID;

}

@property (getter=_pageProxyID,nonatomic,readonly) ObjectIdentifier<WebKit::WebPageProxyIdentifierType> pageProxyID;              //@synthesize pageProxyID=_pageProxyID - In the implementation block
@property (getter=_webPageID,nonatomic,readonly) ObjectIdentifier<WebCore::PageIdentifierType> webPageID;                         //@synthesize webPageID=_webPageID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithPage:(NakedRef<WebKit::WebPage>*)arg1 ;
-(ObjectIdentifier<WebCore::PageIdentifierType>)_webPageID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithPageProxy:(NakedRef<WebKit::WebPageProxy>*)arg1 ;
-(ObjectIdentifier<WebKit::WebPageProxyIdentifierType>)_pageProxyID;
-(id)_initWithPageProxyID:(ObjectIdentifier<WebKit::WebPageProxyIdentifierType>)arg1 andWebPageID:(ObjectIdentifier<WebCore::PageIdentifierType>)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

