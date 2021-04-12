/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKAccessibilityWebPageObjectBase : NSObject {

	WebPage* m_page;
	ObjectIdentifier<WebCore::PageIdentifierType> m_pageID;
	id m_parent;
	BOOL m_hasMainFramePlugin;

}
-(id)accessibilityRootObjectWrapper;
-(void)setHasMainFramePlugin:(BOOL)arg1 ;
-(void)setWebPage:(WebPage*)arg1 ;
-(id)accessibilityPluginObject;
-(AXObjectCache*)axObjectCache;
-(id)accessibilityFocusedUIElement;
-(void)setRemoteParent:(id)arg1 ;
@end

