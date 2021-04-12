/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AVTTransition.h>

@protocol AVTSectionItemTransitionModel;
@interface AVTSectionItemTransition : AVTTransition {

	id<AVTSectionItemTransitionModel> _sectionItemTransitionModel;

}

@property (nonatomic,readonly) id<AVTSectionItemTransitionModel> sectionItemTransitionModel;              //@synthesize sectionItemTransitionModel=_sectionItemTransitionModel - In the implementation block
-(id)model;
-(id)initWithModel:(id)arg1 animated:(BOOL)arg2 setupHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 logger:(id)arg5 ;
-(id<AVTSectionItemTransitionModel>)sectionItemTransitionModel;
-(void)performTransition;
@end

