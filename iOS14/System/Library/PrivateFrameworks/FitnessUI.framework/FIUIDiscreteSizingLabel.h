/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UILabel.h>

@protocol FIUIDiscreteSizingLabelDelegate;
@interface FIUIDiscreteSizingLabel : UILabel {

	id<FIUIDiscreteSizingLabelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FIUIDiscreteSizingLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FIUIDiscreteSizingLabelDelegate>)delegate;
-(void)setText:(id)arg1 ;
-(void)setDelegate:(id<FIUIDiscreteSizingLabelDelegate>)arg1 ;
@end

