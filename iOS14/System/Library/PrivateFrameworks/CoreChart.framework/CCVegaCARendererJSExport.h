/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

@class NSString;


@protocol CCVegaCARendererJSExport <JSExport>
@property (retain) NSString * backgroundColor; 
@optional
-(void)resizeWidth:(double)arg1 height:(double)arg2 originX:(double)arg3 originY:(double)arg4 __JS_EXPORT_AS__resize:(id)arg5;
-(void)render:(id)arg1 __JS_EXPORT_AS__render:(id)arg2;

@required
-(void)dirty;
-(void)setBackgroundColor:(id)arg1;
-(NSString *)backgroundColor;
-(void)render:(id)arg1;
-(void)dirtyAll;
-(void)resizeWidth:(double)arg1 height:(double)arg2 originX:(double)arg3 originY:(double)arg4;

@end

