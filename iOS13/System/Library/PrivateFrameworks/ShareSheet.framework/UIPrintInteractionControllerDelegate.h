/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@protocol UIPrintInteractionControllerDelegate <NSObject>
@optional
-(void)printInteractionControllerWillPresentPrinterOptions:(id)arg1;
-(void)printInteractionControllerDidPresentPrinterOptions:(id)arg1;
-(void)printInteractionControllerWillDismissPrinterOptions:(id)arg1;
-(void)printInteractionControllerDidDismissPrinterOptions:(id)arg1;
-(id)printInteractionControllerParentViewController:(id)arg1;
-(void)printInteractionControllerWillStartJob:(id)arg1;
-(void)printInteractionControllerDidFinishJob:(id)arg1;
-(long long)printInteractionController:(id)arg1 chooseCutterBehavior:(id)arg2;
-(double)printInteractionController:(id)arg1 cutLengthForPaper:(id)arg2;
-(id)printInteractionController:(id)arg1 choosePaper:(id)arg2;

@end

