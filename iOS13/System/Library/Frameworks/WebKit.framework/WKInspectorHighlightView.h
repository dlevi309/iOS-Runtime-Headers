/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface WKInspectorHighlightView : UIView {

	NSMutableArray* _layers;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)update:(const Highlight*)arg1 ;
-(void)_removeAllLayers;
-(void)_createLayers:(unsigned long long)arg1 ;
-(void)_layoutForNodeHighlight:(const Highlight*)arg1 offset:(unsigned)arg2 ;
-(void)_layoutForNodeListHighlight:(const Highlight*)arg1 ;
-(void)_layoutForRectsHighlight:(const Highlight*)arg1 ;
@end

