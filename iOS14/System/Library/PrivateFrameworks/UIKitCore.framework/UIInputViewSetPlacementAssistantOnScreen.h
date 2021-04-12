/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(BOOL)showsInputOrAssistantViews;
-(BOOL)showsInputViews;
-(BOOL)inputViewWillAppear;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(double)inputAssistantViewHeightForInputViewSet:(id)arg1 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
@end

