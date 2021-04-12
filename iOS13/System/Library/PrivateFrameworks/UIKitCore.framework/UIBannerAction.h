/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class _UIBannerContent;

@interface UIBannerAction : BSAction

@property (nonatomic,readonly) _UIBannerContent * bannerContent; 
@property (nonatomic,readonly) BOOL tappable; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)UIActionType;
-(id)_initWithBannerContent:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(BOOL)tappable;
-(id)initWithBannerContent:(id)arg1 ;
-(id)initWithBannerContent:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(_UIBannerContent *)bannerContent;
-(BOOL)bannerTapped;
@end

