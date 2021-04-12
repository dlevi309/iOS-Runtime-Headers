/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKAccessibilityWebPageObjectBase : NSObject {

	NakedPtr<WebKit::WebPage>* m_page;
	ObjectIdentifier<WebCore::PageIdentifierType> m_pageID;
	id m_parent;
	BOOL m_hasMainFramePlugin;

}
-(void)setWebPage:(NakedPtr<WebKit::WebPage>*)arg1 ;
-(id)accessibilityPluginObject;
-(void)setRemoteParent:(id)arg1 ;
-(id)accessibilityRootObjectWrapper;
-(id)accessibilityFocusedUIElement;
-(NakedPtr<WebCore::AXObjectCache>*)axObjectCache;
-(void)setHasMainFramePlugin:(BOOL)arg1 ;
@end

