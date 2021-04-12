/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AVTTransition.h>

@protocol AVTAvatarTransitionModel;
@interface AVTAvatarToLiveTransition : AVTTransition {

	id<AVTAvatarTransitionModel> _avatarTransitionModel;

}

@property (nonatomic,readonly) id<AVTAvatarTransitionModel> avatarTransitionModel;              //@synthesize avatarTransitionModel=_avatarTransitionModel - In the implementation block
-(id)model;
-(id)initWithModel:(id)arg1 animated:(BOOL)arg2 setupHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 logger:(id)arg5 ;
-(void)performTransition;
-(id<AVTAvatarTransitionModel>)avatarTransitionModel;
@end

