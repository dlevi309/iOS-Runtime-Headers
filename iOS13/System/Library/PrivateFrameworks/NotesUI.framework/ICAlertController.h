/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UIAlertController.h>

@class UIAlertAction;

@interface ICAlertController : UIAlertController {

	BOOL _didPerformAction;
	BOOL _didDismissWithDissmissWithoutActionBlock;
	/*^block*/id _dissmissWithoutActionBlock;
	UIAlertAction* _dismissAction;

}

@property (assign,nonatomic) BOOL didDismissWithDissmissWithoutActionBlock;              //@synthesize didDismissWithDissmissWithoutActionBlock=_didDismissWithDissmissWithoutActionBlock - In the implementation block
@property (assign,nonatomic) BOOL didPerformAction;                                      //@synthesize didPerformAction=_didPerformAction - In the implementation block
@property (nonatomic,copy) id dissmissWithoutActionBlock;                                //@synthesize dissmissWithoutActionBlock=_dissmissWithoutActionBlock - In the implementation block
@property (nonatomic,retain) UIAlertAction * dismissAction;                              //@synthesize dismissAction=_dismissAction - In the implementation block
-(void)dealloc;
-(BOOL)_canShowWhileLocked;
-(void)setDismissAction:(UIAlertAction *)arg1 ;
-(UIAlertAction *)dismissAction;
-(id)dissmissWithoutActionBlock;
-(BOOL)didDismissWithDissmissWithoutActionBlock;
-(void)setDidDismissWithDissmissWithoutActionBlock:(BOOL)arg1 ;
-(void)dismissWhenPossible;
-(BOOL)didPerformAction;
-(void)setDidPerformAction:(BOOL)arg1 ;
-(void)setDissmissWithoutActionBlock:(id)arg1 ;
@end

