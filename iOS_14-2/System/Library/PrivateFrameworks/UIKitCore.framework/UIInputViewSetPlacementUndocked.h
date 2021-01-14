/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <NSSecureCoding> {

	CGPoint _normalizedOffset;
	UIEdgeInsets _chromeBuffer;

}

@property (assign,nonatomic) CGPoint normalizedOffset;               //@synthesize normalizedOffset=_normalizedOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chromeBuffer;              //@synthesize chromeBuffer=_chromeBuffer - In the implementation block
+(BOOL)supportsSecureCoding;
+(CGPoint)computeOffsetForOffset:(CGPoint)arg1 withSize:(CGSize)arg2 chromeBuffer:(UIEdgeInsets)arg3 onScreenSize:(CGSize)arg4 ;
+(id)infoWithPoint:(CGPoint)arg1 ;
+(id)placementWithUndockedOffset:(CGPoint)arg1 chromeBuffer:(UIEdgeInsets)arg2 ;
-(BOOL)isUndocked;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(void)setOffset:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)inputViewWillAppear;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(double)heightOfInputViews:(id)arg1 ;
-(CGPoint)normalizedOffset;
-(void)setChromeBuffer:(UIEdgeInsets)arg1 ;
-(void)setNormalizedOffset:(CGPoint)arg1 ;
-(UIEdgeInsets)chromeBuffer;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

