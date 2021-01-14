/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isCollapsed;
-(id)_initWithImpl:(Range*)arg1 ;
-(id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)arg1 inDirection:(long long)arg2 ;
-(OpaqueWKBundleRangeHandleRef)_copyBundleRangeHandleRef;
-(long long)endOffset;
-(void)setEnd:(id)arg1 offset:(int)arg2 ;
-(void)selectNode:(id)arg1 ;
-(void)setStart:(id)arg1 offset:(int)arg2 ;
-(void)collapse:(BOOL)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(NSString *)text;
-(void)selectNodeContents:(id)arg1 ;
-(WKDOMNode *)startContainer;
-(long long)startOffset;
-(NSArray *)textRects;
-(void)dealloc;
-(WKDOMNode *)endContainer;
@end

