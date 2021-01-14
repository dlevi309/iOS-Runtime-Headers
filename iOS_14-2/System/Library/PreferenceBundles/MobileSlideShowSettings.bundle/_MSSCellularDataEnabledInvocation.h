/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)enabled;
-(id)init;
-(id)initWithSpecifier:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_setCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_cellularDataEnabledForSpecifier:(id)arg1 ;
@end

