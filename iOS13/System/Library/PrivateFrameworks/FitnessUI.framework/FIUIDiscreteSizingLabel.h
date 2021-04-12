/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UILabel.h>

@protocol FIUIDiscreteSizingLabelDelegate;
@interface FIUIDiscreteSizingLabel : UILabel {

	id<FIUIDiscreteSizingLabelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FIUIDiscreteSizingLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FIUIDiscreteSizingLabelDelegate>)delegate;
-(void)setDelegate:(id<FIUIDiscreteSizingLabelDelegate>)arg1 ;
-(void)setText:(id)arg1 ;
@end

