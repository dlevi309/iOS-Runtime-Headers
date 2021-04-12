/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMDocument, NSArray;

@interface WKDOMNode : NSObject {

	RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >* _impl;

}

@property (readonly) WKDOMDocument * document; 
@property (readonly) WKDOMNode * parentNode; 
@property (readonly) WKDOMNode * firstChild; 
@property (readonly) WKDOMNode * lastChild; 
@property (readonly) WKDOMNode * previousSibling; 
@property (readonly) WKDOMNode * nextSibling; 
@property (readonly) NSArray * textRects; 
-(void)dealloc;
-(WKDOMNode *)parentNode;
-(WKDOMNode *)firstChild;
-(WKDOMNode *)nextSibling;
-(void)removeChild:(id)arg1 ;
-(void)appendChild:(id)arg1 ;
-(WKDOMNode *)lastChild;
-(WKDOMDocument *)document;
-(WKDOMNode *)previousSibling;
-(id)_initWithImpl:(Node*)arg1 ;
-(void)insertNode:(id)arg1 before:(id)arg2 ;
-(NSArray *)textRects;
-(OpaqueWKBundleNodeHandleRef)_copyBundleNodeHandleRef;
@end

