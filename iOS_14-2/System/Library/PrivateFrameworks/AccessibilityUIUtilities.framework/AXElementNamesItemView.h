/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
	CGRect _availableBounds;
	CGRect _labelContainerFrame;

}

@property (assign,nonatomic) CGSize labelContainerSize;                    //@synthesize labelContainerSize=_labelContainerSize - In the implementation block
@property (assign,nonatomic) CGPoint arrowTipLocation;                     //@synthesize arrowTipLocation=_arrowTipLocation - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect elementFrame;                        //@synthesize elementFrame=_elementFrame - In the implementation block
@property (nonatomic,readonly) CGRect availableBounds;                     //@synthesize availableBounds=_availableBounds - In the implementation block
@property (assign,nonatomic) long long labelPosition;                      //@synthesize labelPosition=_labelPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasExtendedArrow; 
@property (assign,nonatomic) CGRect labelContainerFrame;                   //@synthesize labelContainerFrame=_labelContainerFrame - In the implementation block
@property (assign,nonatomic) CGSize forcedLabelContainerSize;              //@synthesize forcedLabelContainerSize=_forcedLabelContainerSize - In the implementation block
-(double)_arrowHeight;
-(double)_cornerRadius;
-(CGRect)_validateLabelContainerFrame:(CGRect)arg1 ;
-(void)setLabelContainerFrame:(CGRect)arg1 ;
-(double)_outlineWidth;
-(id)_newBackgroundImage;
-(NSString *)name;
-(void)layoutSubviews;
-(CGRect)elementFrame;
-(id)initWithName:(id)arg1 elementFrame:(CGRect)arg2 availableBounds:(CGRect)arg3 styleProvider:(id)arg4 ;
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
-(CGRect)availableBounds;
-(CGSize)forcedLabelContainerSize;
-(void)setLabelContainerSize:(CGSize)arg1 ;
-(BOOL)_shouldAllowLongArrows;
-(CGRect)_elementFrameAdjustedForBounds;
-(CGSize)labelContainerSize;
-(void)setArrowTipLocation:(CGPoint)arg1 ;
@end

