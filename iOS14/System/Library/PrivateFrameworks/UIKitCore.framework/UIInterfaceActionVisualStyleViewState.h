/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITraitCollection *)traitCollection;
-(id)init;
-(void)_collectStateFromVisualStyleViewState:(id)arg1 ;
-(BOOL)_stateEqualToVisualStyleViewState:(id)arg1 ;
-(id)initWithPropertiesFromTopLevelView:(id)arg1 ;
-(id)description;
-(id)copyWithScreen:(id)arg1 ;
-(id)copyWithTraitCollection:(id)arg1 ;
-(void)_collectStateFromScreen:(id)arg1 ;
-(UIScreen *)screen;
-(void)_collectStateFromView:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
@end

