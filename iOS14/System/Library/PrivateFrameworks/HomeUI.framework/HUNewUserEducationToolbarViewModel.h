/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUNewUserEducationBaseViewModel.h>

@class NSString;

@interface HUNewUserEducationToolbarViewModel : HUNewUserEducationBaseViewModel {

	long long _accessoryArrowViewStyle;
	NSString* _accessoryArrowViewTitle;
	long long _flexibleSpaceBarButtonStyle;
	long long _learnMoreBarButtonStyle;
	NSString* _learnMoreButtonTitle;

}

@property (nonatomic,readonly) long long accessoryArrowViewStyle;                  //@synthesize accessoryArrowViewStyle=_accessoryArrowViewStyle - In the implementation block
@property (nonatomic,readonly) NSString * accessoryArrowViewTitle;                 //@synthesize accessoryArrowViewTitle=_accessoryArrowViewTitle - In the implementation block
@property (nonatomic,readonly) long long flexibleSpaceBarButtonStyle;              //@synthesize flexibleSpaceBarButtonStyle=_flexibleSpaceBarButtonStyle - In the implementation block
@property (nonatomic,readonly) long long learnMoreBarButtonStyle;                  //@synthesize learnMoreBarButtonStyle=_learnMoreBarButtonStyle - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreButtonTitle;                    //@synthesize learnMoreButtonTitle=_learnMoreButtonTitle - In the implementation block
+(double)toolBarHeight;
+(id)toolBarTextColor;
-(id)init;
-(long long)accessoryArrowViewStyle;
-(NSString *)accessoryArrowViewTitle;
-(long long)flexibleSpaceBarButtonStyle;
-(long long)learnMoreBarButtonStyle;
-(NSString *)learnMoreButtonTitle;
@end

