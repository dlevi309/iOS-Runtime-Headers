/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STIncludeWebsiteDataGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _toggleIncludeWebsiteDataSpecifier;

}

@property (nonatomic,retain) PSSpecifier * toggleIncludeWebsiteDataSpecifier;              //@synthesize toggleIncludeWebsiteDataSpecifier=_toggleIncludeWebsiteDataSpecifier - In the implementation block
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(void)setIncludeWebsiteData:(id)arg1 specifier:(id)arg2 ;
-(id)includeWebsiteData:(id)arg1 ;
-(void)setToggleIncludeWebsiteDataSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)toggleIncludeWebsiteDataSpecifier;
@end

