/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>
#import <libobjc.A.dylib/_SKUIMenuBarViewElementConfigurationReloadDelegate.h>
#import <libobjc.A.dylib/SKUIMenuBarViewElement.h>
@class SKUIMenuBarViewElementConfiguration;


@protocol SKUIMenuBarViewElement <NSObject>
@property (nonatomic,retain) SKUIMenuBarViewElementConfiguration * configuration; 
@required
-(SKUIMenuBarViewElementConfiguration *)configuration;
-(void)setConfiguration:(id)arg1;

@end


@class SKUIMenuBarViewElementConfiguration, NSArray, NSString;

@interface SKUIMenuBarViewElement : SKUIViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement> {

	NSArray* _titleViewElements;
	SKUIMenuBarViewElementConfiguration* _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIMenuBarViewElementConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)supportedFeatures;
+(Class)_titlesMenuBarViewElementClass;
+(Class)_shelfMenuBarViewElementClass;
-(SKUIMenuBarViewElementConfiguration *)configuration;
-(id)titleForMenuItemAtIndex:(unsigned long long)arg1 ;
-(void)setConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)_menuBarViewElementConfigurationRequestsReload:(id)arg1 ;
-(void)_reloadMenuItems;
@end

