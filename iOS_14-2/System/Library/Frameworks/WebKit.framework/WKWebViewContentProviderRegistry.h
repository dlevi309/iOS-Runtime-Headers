/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKWebViewContentProviderRegistry : NSObject {

	HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > >* _contentProviderForMIMEType;
	HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *> >* _pages;

}
-(Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)_mimeTypesWithCustomContentProviders;
-(void)registerProvider:(Class)arg1 forMIMEType:(const String*)arg2 ;
-(void)addPage:(WebPageProxy*)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)removePage:(WebPageProxy*)arg1 ;
-(Class)providerForMIMEType:(const String*)arg1 ;
@end

