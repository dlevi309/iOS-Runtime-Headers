/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIItem.h>

@class SKUIScreenshot, NSArray, NSMutableDictionary;

@interface SKUISearchItem : SKUIItem {

	SKUIScreenshot* _primaryScreenshot;
	NSArray* _screenshots;
	NSArray* _childItemIdentifiers;
	NSMutableDictionary* _loadedChildItems;

}

@property (nonatomic,readonly) SKUIScreenshot * primaryScreenshot;              //@synthesize primaryScreenshot=_primaryScreenshot - In the implementation block
@property (nonatomic,readonly) NSArray * screenshots;                           //@synthesize screenshots=_screenshots - In the implementation block
-(NSArray *)screenshots;
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)childItemIdentifiers;
-(id)loadedChildItems;
-(id)childItemForIdentifier:(id)arg1 ;
-(void)setChildItem:(id)arg1 forIdentifier:(id)arg2 ;
-(SKUIScreenshot *)primaryScreenshot;
@end

