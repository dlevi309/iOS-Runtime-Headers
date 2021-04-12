/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGAffineTransform)transform;
-(double)alpha;
-(BOOL)isInteractive;
-(BOOL)showsInputViews;
-(BOOL)isUndocked;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(BOOL)inputViewWillAppear;
-(BOOL)showsKeyboard;
-(void)setDirty;
-(BOOL)isInvisible;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(BOOL)accessoryViewWillAppear;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
@end

