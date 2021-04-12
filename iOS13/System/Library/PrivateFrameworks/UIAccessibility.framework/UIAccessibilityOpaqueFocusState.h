/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/


#import <UIAccessibility/UIAccessibility-Structs.h>
@class UIView;

@interface UIAccessibilityOpaqueFocusState : NSObject {

	BOOL _hasFocus;
	BOOL _hasBeenReused;
	id _element;
	UIView* _reusableView;
	CGRect _sceneRelativeFrame;

}

@property (assign,nonatomic,__weak) id element;                      //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) BOOL hasFocus;                          //@synthesize hasFocus=_hasFocus - In the implementation block
@property (assign,nonatomic) CGRect sceneRelativeFrame;              //@synthesize sceneRelativeFrame=_sceneRelativeFrame - In the implementation block
@property (nonatomic,retain) UIView * reusableView;                  //@synthesize reusableView=_reusableView - In the implementation block
@property (assign,nonatomic) BOOL hasBeenReused;                     //@synthesize hasBeenReused=_hasBeenReused - In the implementation block
-(id)description;
-(id)element;
-(BOOL)hasFocus;
-(CGRect)sceneRelativeFrame;
-(UIView *)reusableView;
-(BOOL)hasBeenReused;
-(void)setHasFocus:(BOOL)arg1 ;
-(void)setElement:(id)arg1 ;
-(void)setSceneRelativeFrame:(CGRect)arg1 ;
-(void)setReusableView:(UIView *)arg1 ;
-(void)setHasBeenReused:(BOOL)arg1 ;
@end

