/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class UIViewController;


@protocol PMActivityItemProviderDelegate <NSObject>
@property (assign,nonatomic,__weak) UIViewController * presenter; 
@required
-(void)setPresenter:(id)arg1;
-(UIViewController *)presenter;
-(void)cancel;
-(void)exportFailed;
-(void)exportWillBegin;

@end

