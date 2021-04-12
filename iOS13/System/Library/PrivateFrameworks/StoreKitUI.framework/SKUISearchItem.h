/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSArray *)screenshots;
-(id)childItemIdentifiers;
-(id)loadedChildItems;
-(id)childItemForIdentifier:(id)arg1 ;
-(void)setChildItem:(id)arg1 forIdentifier:(id)arg2 ;
-(SKUIScreenshot *)primaryScreenshot;
@end

