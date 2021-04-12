/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OKWidgetViewDelegate <NSObject>
@required
-(id)pageViewForWidgetView:(id)arg1;
-(id)widgetViewResolution:(id)arg1;
-(void)widgetViewCancelAllOperations:(id)arg1;
-(void)widgetViewCancelAllOperations:(id)arg1 withIdentifier:(id)arg2;
-(void)widgetView:(id)arg1 addHighSpeedOperations:(id)arg2 andConsumingOperations:(id)arg3;
-(void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(/*^block*/id)arg3 forWidgetView:(id)arg4;

@end

