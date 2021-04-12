/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithPageProxyID:(ObjectIdentifier<WebKit::WebPageProxyIdentifierType>)arg1 andWebPageID:(ObjectIdentifier<WebCore::PageIdentifierType>)arg2 ;
-(id)_initWithPageProxy:(WebPageProxy*)arg1 ;
-(id)_initWithPage:(WebPage*)arg1 ;
-(ObjectIdentifier<WebKit::WebPageProxyIdentifierType>)_pageProxyID;
-(ObjectIdentifier<WebCore::PageIdentifierType>)_webPageID;
@end

