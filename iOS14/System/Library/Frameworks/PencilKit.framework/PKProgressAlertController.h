/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIAlertController.h>

@protocol PKProgressAlertControllerDelegate;
@interface PKProgressAlertController : UIAlertController {

	id<PKProgressAlertControllerDelegate> _delegate;
	double _progress;

}

@property (assign,nonatomic,__weak) id<PKProgressAlertControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double progress;                                                    //@synthesize progress=_progress - In the implementation block
+(id)newProgressAlertControllerWithTitle:(id)arg1 cancel:(id)arg2 ;
-(double)progress;
-(id<PKProgressAlertControllerDelegate>)delegate;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<PKProgressAlertControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setProgress:(double)arg1 ;
@end

