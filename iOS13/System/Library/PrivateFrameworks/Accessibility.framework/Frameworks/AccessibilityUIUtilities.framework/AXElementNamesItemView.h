/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, UIImageView, NSString;

@interface AXElementNamesItemView : UIView {

	UILabel* _label;
	UIView* _backgroundView;
	UIImageView* _backgroundMaskView;
	long long _labelPosition;
	CGSize _forcedLabelContainerSize;
	CGSize _labelContainerSize;
	CGPoint _arrowTipLocation;
	CGRect _elementFrame;
	CGRect _containerBounds;
	CGRect _labelContainerFrame;

}

@property (assign,nonatomic) CGSize labelContainerSize;                    //@synthesize labelContainerSize=_labelContainerSize - In the implementation block
@property (assign,nonatomic) CGPoint arrowTipLocation;                     //@synthesize arrowTipLocation=_arrowTipLocation - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect elementFrame;                        //@synthesize elementFrame=_elementFrame - In the implementation block
@property (nonatomic,readonly) CGRect containerBounds;                     //@synthesize containerBounds=_containerBounds - In the implementation block
@property (assign,nonatomic) long long labelPosition;                      //@synthesize labelPosition=_labelPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasExtendedArrow; 
@property (assign,nonatomic) CGRect labelContainerFrame;                   //@synthesize labelContainerFrame=_labelContainerFrame - In the implementation block
@property (assign,nonatomic) CGSize forcedLabelContainerSize;              //@synthesize forcedLabelContainerSize=_forcedLabelContainerSize - In the implementation block
-(NSString *)name;
-(void)layoutSubviews;
-(double)_cornerRadius;
-(CGRect)containerBounds;
-(double)_arrowHeight;
-(CGRect)elementFrame;
-(id)initWithName:(id)arg1 elementFrame:(CGRect)arg2 containerBounds:(CGRect)arg3 styleProvider:(id)arg4 ;
-(void)setForcedLabelContainerSize:(CGSize)arg1 ;
-(CGRect)labelContainerFrame;
-(BOOL)collidesWithView:(id)arg1 ;
-(long long)labelPosition;
-(void)setLabelPosition:(long long)arg1 ;
-(BOOL)hasExtendedArrow;
-(void)_updateLabelContainerSize;
-(void)_updateFromMainProperties;
-(BOOL)_usesExtendedArrow;
-(void)_updateFromLabelContainerFrame;
-(CGRect)_collisionFrameForArrow;
-(BOOL)_usesArrow;
-(CGPoint)arrowTipLocation;
-(BOOL)_arrowPointsDown;
-(CGSize)forcedLabelContainerSize;
-(void)setLabelContainerSize:(CGSize)arg1 ;
-(BOOL)_shouldAllowLongArrows;
-(CGRect)_elementFrameAdjustedForBounds;
-(CGSize)labelContainerSize;
-(void)setArrowTipLocation:(CGPoint)arg1 ;
-(CGRect)_validateLabelContainerFrame:(CGRect)arg1 ;
-(void)setLabelContainerFrame:(CGRect)arg1 ;
-(double)_outlineWidth;
-(id)_newBackgroundImage;
@end

