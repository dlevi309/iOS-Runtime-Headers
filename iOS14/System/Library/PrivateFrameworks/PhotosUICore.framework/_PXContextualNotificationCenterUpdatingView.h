/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXContextualNotificationCenter;

@interface _PXContextualNotificationCenterUpdatingView : UIView {

	PXContextualNotificationCenter* _contextualNotificationCenter;

}

@property (assign,nonatomic,__weak) PXContextualNotificationCenter * contextualNotificationCenter;              //@synthesize contextualNotificationCenter=_contextualNotificationCenter - In the implementation block
-(PXContextualNotificationCenter *)contextualNotificationCenter;
-(void)setContextualNotificationCenter:(PXContextualNotificationCenter *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
@end

