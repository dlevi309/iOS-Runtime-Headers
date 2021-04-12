/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

