/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OKWidgetViewProxyExports <JSExport>
@optional
-(void)dynamicsSnapToPoint:(CGPoint)arg1 withDamping:(double)arg2 __JS_EXPORT_AS__dynamicsSnapToPoint:(id)arg3;
-(id)addSubWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 __JS_EXPORT_AS__addSubWidgetViewWithTemplateName:(id)arg4;
-(CGPoint*)convertPointWithParallax:(CGPoint)arg1 __JS_EXPORT_AS__convertPointWithParallax:(id)arg2;
-(id)subWidgetViewsInRect:(CGRect)arg1 __JS_EXPORT_AS__subWidgetViewsInRect:(id)arg2;

@required
-(void)dynamicsRemoveSnapping;
-(void)dynamicsSnapToPoint:(CGPoint)arg1 withDamping:(double)arg2;
-(id)addSubWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3;
-(CGPoint*)convertPointWithParallax:(CGPoint)arg1;
-(id)subWidgetViewsInRect:(CGRect)arg1;

@end

