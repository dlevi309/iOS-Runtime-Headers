/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UIInputViewSetPlacementDelegate;
@class NSArray;

@interface UIInputViewSetPlacement : NSObject <NSSecureCoding> {

	BOOL _dirty;
	id<UIInputViewSetPlacementDelegate> delegate;
	double _extendedHeight;
	NSArray* _subPlacements;

}

@property (nonatomic,readonly) BOOL showsInputViews; 
@property (nonatomic,readonly) BOOL showsKeyboard; 
@property (nonatomic,readonly) BOOL showsInputOrAssistantViews; 
@property (nonatomic,readonly) BOOL isUndocked; 
@property (nonatomic,readonly) BOOL requiresWindowBasedSafeAreaInsets; 
@property (nonatomic,readonly) BOOL isFloating; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isHiddenForFloatingTransition; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (assign,nonatomic) double extendedHeight;                                     //@synthesize extendedHeight=_extendedHeight - In the implementation block
@property (nonatomic,readonly) double alpha; 
@property (nonatomic,retain) NSArray * subPlacements;                                   //@synthesize subPlacements=_subPlacements - In the implementation block
@property (assign,nonatomic) id<UIInputViewSetPlacementDelegate> delegate; 
+(BOOL)supportsSecureCoding;
+(id)placement;
+(id)deactivatedKeyboardPlacementWithCurrentPlacement:(/*^block*/id)arg1 ;
+(id)encodablePlacementsForXPC;
-(BOOL)isUndocked;
-(BOOL)isFloating;
-(id<UIInputViewSetPlacementDelegate>)delegate;
-(double)alpha;
-(BOOL)accessoryViewWillAppear;
-(void)setDirty;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInteractive;
-(BOOL)showsKeyboard;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(CGAffineTransform)transform;
-(BOOL)showsInputOrAssistantViews;
-(void)setDelegate:(id<UIInputViewSetPlacementDelegate>)arg1 ;
-(void)setExtendedHeight:(double)arg1 ;
-(id)description;
-(BOOL)isVisible;
-(BOOL)showsInputViews;
-(BOOL)isHiddenForFloatingTransition;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)inputViewWillAppear;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(double)extendedHeight;
-(NSArray *)subPlacements;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(double)inputAssistantViewHeightForInputViewSet:(id)arg1 ;
-(unsigned long long)indexForPurpose:(unsigned long long)arg1 ;
-(BOOL)requiresWindowBasedSafeAreaInsets;
-(id)expiringPlacement;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(unsigned long long)notificationsForTransitionToPlacement:(id)arg1 ;
-(void)checkSizeForOwner:(id)arg1 ;
-(CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1 ;
-(void)setOtherPlacement:(id)arg1 ;
-(unsigned long long)computeComparisonMask;
-(CGRect)visibleFrameForNotificationsUsingHostingItem:(id)arg1 ;
-(void)setSubPlacements:(NSArray *)arg1 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

