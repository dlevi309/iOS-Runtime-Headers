/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIInputViewSetPlacement;

@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacement <NSSecureCoding> {

	UIInputViewSetPlacement* _actualPlacement;

}
+(BOOL)supportsSecureCoding;
+(id)placementWithPlacement:(id)arg1 ;
-(BOOL)isUndocked;
-(double)alpha;
-(BOOL)accessoryViewWillAppear;
-(void)setDirty;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInteractive;
-(BOOL)showsKeyboard;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(CGAffineTransform)transform;
-(BOOL)showsInputOrAssistantViews;
-(id)description;
-(BOOL)isVisible;
-(BOOL)showsInputViews;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)inputViewWillAppear;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)subPlacements;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(unsigned long long)indexForPurpose:(unsigned long long)arg1 ;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(unsigned long long)computeComparisonMask;
-(CGRect)visibleFrameForNotificationsUsingHostingItem:(id)arg1 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

