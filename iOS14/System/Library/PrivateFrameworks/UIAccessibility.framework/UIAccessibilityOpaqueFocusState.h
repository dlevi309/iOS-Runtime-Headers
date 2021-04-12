/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSceneRelativeFrame:(CGRect)arg1 ;
-(id)element;
-(void)setElement:(id)arg1 ;
-(id)description;
-(void)setHasFocus:(BOOL)arg1 ;
-(void)setHasBeenReused:(BOOL)arg1 ;
-(CGRect)sceneRelativeFrame;
-(BOOL)hasFocus;
-(BOOL)hasBeenReused;
-(void)setReusableView:(UIView *)arg1 ;
-(UIView *)reusableView;
@end

