/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class _UIBannerContent;

@interface UIBannerAction : BSAction

@property (nonatomic,readonly) _UIBannerContent * bannerContent; 
@property (nonatomic,readonly) BOOL tappable; 
-(long long)UIActionType;
-(BOOL)tappable;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(_UIBannerContent *)bannerContent;
-(BOOL)bannerTapped;
-(id)_initWithBannerContent:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)initWithBannerContent:(id)arg1 ;
-(id)initWithBannerContent:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end

