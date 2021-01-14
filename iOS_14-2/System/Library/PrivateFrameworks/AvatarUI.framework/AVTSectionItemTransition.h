/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AVTTransition.h>

@protocol AVTSectionItemTransitionModel;
@interface AVTSectionItemTransition : AVTTransition {

	id<AVTSectionItemTransitionModel> _sectionItemTransitionModel;

}

@property (nonatomic,readonly) id<AVTSectionItemTransitionModel> sectionItemTransitionModel;              //@synthesize sectionItemTransitionModel=_sectionItemTransitionModel - In the implementation block
-(id)model;
-(void)performTransition;
-(id<AVTSectionItemTransitionModel>)sectionItemTransitionModel;
-(id)initWithModel:(id)arg1 animated:(BOOL)arg2 setupHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 logger:(id)arg5 ;
@end

