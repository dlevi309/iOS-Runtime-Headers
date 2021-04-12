/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneClientSettings.h>

@interface BNMutableSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (assign,nonatomic) CGSize preferredContentSize; 
@property (assign,nonatomic) UIEdgeInsets bannerContentOutsets; 
@property (assign,getter=isDraggingDismissalEnabled,nonatomic) BOOL draggingDismissalEnabled; 
@property (assign,getter=isDraggingInteractionEnabled,nonatomic) BOOL draggingInteractionEnabled; 
@property (assign,getter=isTouchOutsideDismissalEnabled,nonatomic) BOOL touchOutsideDismissalEnabled; 
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(CGSize)preferredContentSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isDraggingDismissalEnabled;
-(BOOL)isDraggingInteractionEnabled;
-(BOOL)isTouchOutsideDismissalEnabled;
-(UIEdgeInsets)bannerContentOutsets;
-(void)setBannerContentOutsets:(UIEdgeInsets)arg1 ;
-(void)setDraggingDismissalEnabled:(BOOL)arg1 ;
-(void)setDraggingInteractionEnabled:(BOOL)arg1 ;
-(void)setTouchOutsideDismissalEnabled:(BOOL)arg1 ;
@end

