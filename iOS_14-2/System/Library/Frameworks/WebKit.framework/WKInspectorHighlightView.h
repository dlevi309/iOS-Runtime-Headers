/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface WKInspectorHighlightView : UIView {

	NSMutableArray* _layers;

}
-(void)update:(const Highlight*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_createLayers:(unsigned long long)arg1 ;
-(void)_layoutForNodeHighlight:(const Highlight*)arg1 offset:(unsigned)arg2 ;
-(void)_layoutForNodeListHighlight:(const Highlight*)arg1 ;
-(void)_layoutForRectsHighlight:(const Highlight*)arg1 ;
-(void)_removeAllLayers;
-(void)dealloc;
@end

