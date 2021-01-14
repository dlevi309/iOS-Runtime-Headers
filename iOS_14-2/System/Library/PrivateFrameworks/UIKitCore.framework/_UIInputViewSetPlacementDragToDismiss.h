/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInputViewSetPlacementOnScreen.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding> {

	BOOL _dismissKeyboardOnly;
	double _offset;

}

@property (assign,nonatomic) double offset;                         //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL dismissKeyboardOnly;              //@synthesize dismissKeyboardOnly=_dismissKeyboardOnly - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(BOOL)arg2 ;
-(BOOL)dismissKeyboardOnly;
-(void)setDismissKeyboardOnly:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInteractive;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

