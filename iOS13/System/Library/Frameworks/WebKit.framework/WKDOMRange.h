/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMNode, NSString, NSArray;

@interface WKDOMRange : NSObject {

	RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> >* _impl;

}

@property (retain,readonly) WKDOMNode * startContainer; 
@property (readonly) long long startOffset; 
@property (retain,readonly) WKDOMNode * endContainer; 
@property (readonly) long long endOffset; 
@property (copy,readonly) NSString * text; 
@property (readonly) BOOL isCollapsed; 
@property (readonly) NSArray * textRects; 
-(void)dealloc;
-(NSString *)text;
-(WKDOMNode *)startContainer;
-(long long)startOffset;
-(WKDOMNode *)endContainer;
-(long long)endOffset;
-(BOOL)isCollapsed;
-(id)initWithDocument:(id)arg1 ;
-(void)selectNodeContents:(id)arg1 ;
-(void)selectNode:(id)arg1 ;
-(void)setStart:(id)arg1 offset:(int)arg2 ;
-(void)setEnd:(id)arg1 offset:(int)arg2 ;
-(id)_initWithImpl:(Range*)arg1 ;
-(NSArray *)textRects;
-(void)collapse:(BOOL)arg1 ;
-(id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)arg1 inDirection:(long long)arg2 ;
-(OpaqueWKBundleRangeHandleRef)_copyBundleRangeHandleRef;
@end

