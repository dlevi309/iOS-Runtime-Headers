/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
*/


@class PSSpecifier;

@interface _MSSCellularDataEnabledInvocation : NSObject {

	PSSpecifier* _specifier;
	/*^block*/id _changeHandler;
	id _target;
	SEL _getter;
	SEL _setter;

}

@property (nonatomic,readonly) BOOL enabled; 
-(id)init;
-(BOOL)enabled;
-(id)initWithSpecifier:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_setCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_cellularDataEnabledForSpecifier:(id)arg1 ;
@end

