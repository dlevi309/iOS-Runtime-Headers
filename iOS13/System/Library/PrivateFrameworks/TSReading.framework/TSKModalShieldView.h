/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIView.h>

@protocol TSKModalShieldDelegate;
@interface TSKModalShieldView : UIView {

	id<TSKModalShieldDelegate> mDelegate;

}

@property (assign,nonatomic) id<TSKModalShieldDelegate> delegate; 
-(id<TSKModalShieldDelegate>)delegate;
-(void)setDelegate:(id<TSKModalShieldDelegate>)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

