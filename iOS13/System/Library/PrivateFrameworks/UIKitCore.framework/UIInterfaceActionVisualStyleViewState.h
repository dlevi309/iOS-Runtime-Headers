/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITraitCollection, UIScreen, UIColor;

@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying> {

	UITraitCollection* _traitCollection;
	UIScreen* _screen;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIScreen *)screen;
-(UITraitCollection *)traitCollection;
-(UIColor *)tintColor;
-(id)copyWithScreen:(id)arg1 ;
-(id)copyWithTraitCollection:(id)arg1 ;
-(id)initWithPropertiesFromTopLevelView:(id)arg1 ;
-(void)_collectStateFromView:(id)arg1 ;
-(void)_collectStateFromScreen:(id)arg1 ;
-(void)_collectStateFromVisualStyleViewState:(id)arg1 ;
-(BOOL)_stateEqualToVisualStyleViewState:(id)arg1 ;
@end

