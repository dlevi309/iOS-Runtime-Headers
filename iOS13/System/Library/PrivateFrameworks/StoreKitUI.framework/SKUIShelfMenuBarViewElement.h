/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIShelfViewElement.h>
#import <libobjc.A.dylib/_SKUIMenuBarViewElementConfigurationReloadDelegate.h>
#import <libobjc.A.dylib/SKUIMenuBarViewElement.h>

@class NSArray, SKUIMenuBarViewElementConfiguration, NSString;

@interface SKUIShelfMenuBarViewElement : SKUIShelfViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement> {

	NSArray* _focusedViewElements;
	NSArray* _regularViewElements;
	SKUIMenuBarViewElementConfiguration* _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIMenuBarViewElementConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)supportedFeatures;
-(void)setConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 ;
-(SKUIMenuBarViewElementConfiguration *)configuration;
-(unsigned long long)elementType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(void)_menuBarViewElementConfigurationRequestsReload:(id)arg1 ;
-(void)_reloadMenuItems;
-(id)regularViewElementForMenuItemAtIndex:(unsigned long long)arg1 ;
-(id)focusedViewElementForMenuItemAtIndex:(unsigned long long)arg1 ;
@end

