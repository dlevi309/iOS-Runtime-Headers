/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacementUndocked.h>
#import <UIKitCore/_UIGeometryChangeObserver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIView, UIInputViewSetPlacementOnScreen, UIResponder, NSString;

@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked <_UIGeometryChangeObserver, NSSecureCoding> {

	double _floatingWidth;
	UIView* _responderToFollow;
	CGRect _responderRect;
	CGSize _lastSize;
	UIInputViewSetPlacementOnScreen* _cachedSecondaryPlacement;

}

@property (assign,nonatomic) double floatingWidth;                         //@synthesize floatingWidth=_floatingWidth - In the implementation block
@property (assign,nonatomic) UIResponder * responderToFollow;              //@synthesize responderToFollow=_responderToFollow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)infoWithPoint:(CGPoint)arg1 forOwner:(id)arg2 ;
+(id)placementWithUndockedOffset:(CGPoint)arg1 chromeBuffer:(UIEdgeInsets)arg2 floatingWidth:(double)arg3 ;
+(CGRect)frameAtOffset:(CGPoint)arg1 keyboardSize:(CGSize)arg2 screenSize:(CGSize)arg3 ;
-(BOOL)isFloating;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_geometryChanged:(const SCD_Struct_UI29*)arg1 forAncestor:(id)arg2 ;
-(double)floatingWidth;
-(void)setDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)subPlacements;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(unsigned long long)indexForPurpose:(unsigned long long)arg1 ;
-(id)expiringPlacement;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(void)checkSizeForOwner:(id)arg1 ;
-(CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1 ;
-(id)currentResponderView;
-(void)setFloatingWidth:(double)arg1 ;
-(UIResponder *)responderToFollow;
-(void)setResponderToFollow:(UIResponder *)arg1 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

