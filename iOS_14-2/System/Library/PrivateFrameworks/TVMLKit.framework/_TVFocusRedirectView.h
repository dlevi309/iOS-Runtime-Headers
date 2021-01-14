/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFocusContainerGuide;

@interface _TVFocusRedirectView : UIView {

	BOOL _containsInertia;
	UIFocusContainerGuide* _containerGuide;

}

@property (assign,nonatomic) BOOL containsInertia;                                  //@synthesize containsInertia=_containsInertia - In the implementation block
@property (nonatomic,readonly) UIFocusContainerGuide * containerGuide;              //@synthesize containerGuide=_containerGuide - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_containsInertiaSelectionChanges;
-(BOOL)containsInertia;
-(void)setContainsInertia:(BOOL)arg1 ;
-(UIFocusContainerGuide *)containerGuide;
@end

