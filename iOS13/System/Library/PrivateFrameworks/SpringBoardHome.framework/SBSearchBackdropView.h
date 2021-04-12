/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUIProgressiveBlur.h>

@class MTMaterialView, NSString;

@interface SBSearchBackdropView : UIView <SBUIProgressiveBlur> {

	MTMaterialView* _materialView;
	BOOL _transitioningToBlur;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(void)completeTransitionSuccessfully:(BOOL)arg1 ;
-(void)prepareForTransitionToBlurred:(BOOL)arg1 ;
-(void)completeIncrementalTransitionSuccessfully:(BOOL)arg1 ;
@end

