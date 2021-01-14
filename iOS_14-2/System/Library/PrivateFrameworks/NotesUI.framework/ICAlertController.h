/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UIAlertController.h>

@class UIAlertAction;

@interface ICAlertController : UIAlertController {

	BOOL _didPerformAction;
	BOOL _didDismissWithDismissWithoutActionBlock;
	/*^block*/id _dismissWithoutActionBlock;
	UIAlertAction* _dismissAction;

}

@property (assign,nonatomic) BOOL didDismissWithDismissWithoutActionBlock;              //@synthesize didDismissWithDismissWithoutActionBlock=_didDismissWithDismissWithoutActionBlock - In the implementation block
@property (assign,nonatomic) BOOL didPerformAction;                                     //@synthesize didPerformAction=_didPerformAction - In the implementation block
@property (nonatomic,copy) id dismissWithoutActionBlock;                                //@synthesize dismissWithoutActionBlock=_dismissWithoutActionBlock - In the implementation block
@property (nonatomic,retain) UIAlertAction * dismissAction;                             //@synthesize dismissAction=_dismissAction - In the implementation block
-(BOOL)_canShowWhileLocked;
-(void)setDismissAction:(UIAlertAction *)arg1 ;
-(UIAlertAction *)dismissAction;
-(void)dealloc;
-(id)dismissWithoutActionBlock;
-(BOOL)didDismissWithDismissWithoutActionBlock;
-(void)setDidDismissWithDismissWithoutActionBlock:(BOOL)arg1 ;
-(void)dismissWhenPossible;
-(BOOL)didPerformAction;
-(void)setDidPerformAction:(BOOL)arg1 ;
-(void)setDismissWithoutActionBlock:(id)arg1 ;
@end

