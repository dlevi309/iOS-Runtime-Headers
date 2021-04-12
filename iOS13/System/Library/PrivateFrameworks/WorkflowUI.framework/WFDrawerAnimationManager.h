/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class WFDrawerAnimation;

@interface WFDrawerAnimationManager : NSObject {

	WFDrawerAnimation* _heightAnimation;
	unsigned long long _heightAnimationPushCount;

}

@property (nonatomic,readonly) WFDrawerAnimation * heightAnimation; 
-(id)defaultHeightAnimation;
-(WFDrawerAnimation *)heightAnimation;
-(void)pushHeightAnimation:(id)arg1 ;
-(void)popHeightAnimation;
@end

