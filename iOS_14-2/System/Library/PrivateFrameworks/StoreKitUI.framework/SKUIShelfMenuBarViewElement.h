/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)elementType;
-(SKUIMenuBarViewElementConfiguration *)configuration;
-(void)setConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)_menuBarViewElementConfigurationRequestsReload:(id)arg1 ;
-(void)_reloadMenuItems;
-(id)regularViewElementForMenuItemAtIndex:(unsigned long long)arg1 ;
-(id)focusedViewElementForMenuItemAtIndex:(unsigned long long)arg1 ;
@end

