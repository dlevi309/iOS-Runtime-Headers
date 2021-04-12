/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTAvatarActionsViewControllerLayout.h>

@protocol AVTViewLayoutInfo;
@interface AVTAvatarActionsViewControllerSunflowerLayout : NSObject <AVTAvatarActionsViewControllerLayout> {

	long long _buttonCount;
	id<AVTViewLayoutInfo> _avtViewLayout;
	CGSize _containerSize;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) CGSize containerSize;                             //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                          //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) long long buttonCount;                            //@synthesize buttonCount=_buttonCount - In the implementation block
@property (nonatomic,readonly) double actionButtonsViewAlpha; 
@property (nonatomic,readonly) CGRect actionButtonsViewFrame; 
@property (nonatomic,readonly) CGRect avatarContainerViewFrame; 
@property (nonatomic,readonly) CGRect userInfoFrame; 
@property (nonatomic,readonly) id<AVTViewLayoutInfo> avtViewLayout;              //@synthesize avtViewLayout=_avtViewLayout - In the implementation block
+(double)buttonHeight;
+(double)heightForButtonsViewWithButtonCount:(long long)arg1 ;
-(CGSize)containerSize;
-(long long)buttonCount;
-(UIEdgeInsets)edgeInsets;
-(CGRect)actionButtonsViewFrame;
-(CGRect)actionButtonsViewFrameForButtonCount:(long long)arg1 ;
-(CGRect)userInfoFrame;
-(id)initWithContainerSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 buttonCount:(long long)arg3 avtViewLayoutInfo:(id)arg4 ;
-(double)actionButtonsViewAlpha;
-(CGRect)avatarContainerViewFrame;
-(id<AVTViewLayoutInfo>)avtViewLayout;
@end

