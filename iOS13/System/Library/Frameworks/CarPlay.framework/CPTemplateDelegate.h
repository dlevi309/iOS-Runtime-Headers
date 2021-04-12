/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/


@protocol CPTemplateDelegate <NSObject>
@optional
-(void)templateDidDismiss:(id)arg1;
-(void)templateWillAppear:(id)arg1 animated:(BOOL)arg2;
-(void)templateDidAppear:(id)arg1 animated:(BOOL)arg2;
-(void)templateWillDisappear:(id)arg1 animated:(BOOL)arg2;
-(void)templateDidDisappear:(id)arg1 animated:(BOOL)arg2;
-(BOOL)isCarPlayCanvasActive;

@required
-(void)handleActionForControlIdentifier:(id)arg1;

@end

