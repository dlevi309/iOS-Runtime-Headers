/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/


@protocol CPTemplateDelegate <NSObject>
@optional
-(void)templateWillAppear:(id)arg1 animated:(BOOL)arg2;
-(void)templateDidAppear:(id)arg1 animated:(BOOL)arg2;
-(void)templateWillDisappear:(id)arg1 animated:(BOOL)arg2;
-(void)templateDidDisappear:(id)arg1 animated:(BOOL)arg2;
-(void)templateDidDismiss:(id)arg1;
-(BOOL)isCarPlayCanvasActive;

@required
-(void)handleActionForControlIdentifier:(id)arg1;

@end

