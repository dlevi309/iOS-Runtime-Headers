/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>
#import <libobjc.A.dylib/_SKUIMenuBarViewElementConfigurationReloadDelegate.h>
#import <libobjc.A.dylib/SKUIMenuBarViewElement.h>
@class SKUIMenuBarViewElementConfiguration;


@protocol SKUIMenuBarViewElement <NSObject>
@property (nonatomic,retain) SKUIMenuBarViewElementConfiguration * configuration; 
@required
-(void)setConfiguration:(id)arg1;
-(SKUIMenuBarViewElementConfiguration *)configuration;

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
-(void)setConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 ;
-(SKUIMenuBarViewElementConfiguration *)configuration;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)_menuBarViewElementConfigurationRequestsReload:(id)arg1 ;
-(id)titleForMenuItemAtIndex:(unsigned long long)arg1 ;
-(void)_reloadMenuItems;
@end

