/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canBecomeFocused;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(void)setNeedsFocusUpdate;
-(id)init;
-(CGRect)frame;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_preferredFocusRegionCoordinateSpace;
-(id<UIFocusItemContainer>)focusItemContainer;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(void)updateFocusIfNeeded;
@end

