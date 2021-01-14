/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_initWithImpl:(Node*)arg1 ;
-(void)insertNode:(id)arg1 before:(id)arg2 ;
-(OpaqueWKBundleNodeHandleRef)_copyBundleNodeHandleRef;
-(WKDOMNode *)nextSibling;
-(WKDOMNode *)previousSibling;
-(void)appendChild:(id)arg1 ;
-(WKDOMNode *)lastChild;
-(WKDOMNode *)parentNode;
-(WKDOMNode *)firstChild;
-(void)removeChild:(id)arg1 ;
-(WKDOMDocument *)document;
-(NSArray *)textRects;
-(void)dealloc;
@end

