/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) BOOL isUndocked; 
@property (nonatomic,readonly) BOOL requiresWindowBasedSafeAreaInsets; 
@property (nonatomic,readonly) BOOL isFloating; 
@property (nonatomic,readonly) BOOL isInvisible; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (assign,nonatomic) double extendedHeight;                                     //@synthesize extendedHeight=_extendedHeight - In the implementation block
@property (nonatomic,readonly) double alpha; 
@property (nonatomic,retain) NSArray * subPlacements;                                   //@synthesize subPlacements=_subPlacements - In the implementation block
@property (assign,nonatomic) id<UIInputViewSetPlacementDelegate> delegate; 
+(BOOL)supportsSecureCoding;
+(id)placement;
+(id)encodablePlacementsForXPC;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UIInputViewSetPlacementDelegate>)delegate;
-(void)setDelegate:(id<UIInputViewSetPlacementDelegate>)arg1 ;
-(CGAffineTransform)transform;
-(double)alpha;
-(BOOL)isFloating;
-(BOOL)isInteractive;
-(BOOL)showsInputViews;
-(BOOL)isUndocked;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(BOOL)inputViewWillAppear;
-(BOOL)showsKeyboard;
-(double)inputAssistantViewHeightForInputViewSet:(id)arg1 ;
-(void)setDirty;
-(BOOL)isInvisible;
-(BOOL)requiresWindowBasedSafeAreaInsets;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(unsigned long long)notificationsForTransitionToPlacement:(id)arg1 ;
-(BOOL)accessoryViewWillAppear;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(void)checkSizeForOwner:(id)arg1 ;
-(NSArray *)subPlacements;
-(unsigned long long)indexForPurpose:(unsigned long long)arg1 ;
-(id)expiringPlacement;
-(CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1 ;
-(double)extendedHeight;
-(void)setExtendedHeight:(double)arg1 ;
-(void)setSubPlacements:(NSArray *)arg1 ;
@end

