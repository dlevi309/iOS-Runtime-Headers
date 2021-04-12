/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <SwiftUI/SwiftUI-Structs.h>
#import <UIKit/UIFocusItem.h>
#import <libobjc.A.dylib/_UIFocusRegionContainer.h>

@class NSArray;

@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F28UIFocusableViewResponderItem : NSObject <UIFocusItem, _UIFocusRegionContainer> {

	 base;
	 host;

}

@property (readonly,nonatomic) CGRect frame; 
@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
@property (readonly,nonatomic) id<UIFocusItemContainer> focusItemContainer; 
-(id)init;
-(CGRect)frame;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(BOOL)canBecomeFocused;
-(id)_preferredFocusRegionCoordinateSpace;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
@end

