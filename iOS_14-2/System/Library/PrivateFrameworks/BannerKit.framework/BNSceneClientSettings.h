/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIApplicationSceneClientSettings.h>

@interface BNSceneClientSettings : UIApplicationSceneClientSettings

@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,readonly) UIEdgeInsets bannerContentOutsets; 
@property (getter=isDraggingDismissalEnabled,nonatomic,readonly) BOOL draggingDismissalEnabled; 
@property (getter=isDraggingInteractionEnabled,nonatomic,readonly) BOOL draggingInteractionEnabled; 
@property (getter=isTouchOutsideDismissalEnabled,nonatomic,readonly) BOOL touchOutsideDismissalEnabled; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)isDraggingDismissalEnabled;
-(BOOL)isDraggingInteractionEnabled;
-(BOOL)isTouchOutsideDismissalEnabled;
-(UIEdgeInsets)bannerContentOutsets;
@end

