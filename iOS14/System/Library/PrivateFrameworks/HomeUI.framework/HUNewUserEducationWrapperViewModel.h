/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUNewUserEducationBaseViewModel.h>

@class HUNewUserEducationStackViewModel, HUNewUserEducationToolbarViewModel;

@interface HUNewUserEducationWrapperViewModel : HUNewUserEducationBaseViewModel {

	BOOL _masksToBounds;
	HUNewUserEducationStackViewModel* _stackViewModel;
	HUNewUserEducationToolbarViewModel* _toolbarModel;

}

@property (nonatomic,readonly) BOOL masksToBounds;                                             //@synthesize masksToBounds=_masksToBounds - In the implementation block
@property (nonatomic,readonly) HUNewUserEducationStackViewModel * stackViewModel;              //@synthesize stackViewModel=_stackViewModel - In the implementation block
@property (nonatomic,readonly) HUNewUserEducationToolbarViewModel * toolbarModel;              //@synthesize toolbarModel=_toolbarModel - In the implementation block
+(double)cornerRadius;
-(id)init;
-(BOOL)masksToBounds;
-(HUNewUserEducationToolbarViewModel *)toolbarModel;
-(HUNewUserEducationStackViewModel *)stackViewModel;
@end

