/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AVTTransition.h>

@protocol AVTAvatarTransitionModel;
@interface _AVTAvatarToLiveNoTransition : AVTTransition {

	id<AVTAvatarTransitionModel> _avatarTransitionModel;

}

@property (nonatomic,readonly) id<AVTAvatarTransitionModel> avatarTransitionModel;              //@synthesize avatarTransitionModel=_avatarTransitionModel - In the implementation block
-(id)model;
-(id<AVTAvatarTransitionModel>)avatarTransitionModel;
-(void)_startTransition;
-(id)initWithModel:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 logger:(id)arg4 ;
@end

