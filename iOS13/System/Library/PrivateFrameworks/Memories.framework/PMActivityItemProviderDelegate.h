/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class UIViewController;


@protocol PMActivityItemProviderDelegate <NSObject>
@property (assign,nonatomic,__weak) UIViewController * presenter; 
@required
-(void)cancel;
-(UIViewController *)presenter;
-(void)setPresenter:(id)arg1;
-(void)exportFailed;
-(void)exportWillBegin;

@end

