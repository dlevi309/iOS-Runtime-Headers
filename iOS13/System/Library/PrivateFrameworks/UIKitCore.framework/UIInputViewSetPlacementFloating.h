/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(CGRect)frameAtOffset:(CGPoint)arg1 keyboardSize:(CGSize)arg2 screenSize:(CGSize)arg3 ;
+(id)placementWithUndockedOffset:(CGPoint)arg1 chromeBuffer:(UIEdgeInsets)arg2 floatingWidth:(double)arg3 ;
+(id)infoWithPoint:(CGPoint)arg1 forOwner:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isFloating;
-(double)floatingWidth;
-(void)_geometryChanges:(id)arg1 forAncestor:(id)arg2 ;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(void)checkSizeForOwner:(id)arg1 ;
-(id)subPlacements;
-(unsigned long long)indexForPurpose:(unsigned long long)arg1 ;
-(id)expiringPlacement;
-(CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1 ;
-(id)currentResponderView;
-(void)setFloatingWidth:(double)arg1 ;
-(UIResponder *)responderToFollow;
-(void)setResponderToFollow:(UIResponder *)arg1 ;
@end

