/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSArray, NSExtensionItem;

@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass> {

	NSArray* _extensionSubItems;

}

@property (nonatomic,retain) NSArray * extensionSubItems;                    //@synthesize extensionSubItems=_extensionSubItems - In the implementation block
@property (nonatomic,readonly) NSExtensionItem * extensionItem; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)itemWithObject:(id)arg1 sourceAppBundleIdentifier:(id)arg2 ;
-(id)name;
-(NSExtensionItem *)extensionItem;
-(id)itemProviders;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)cachesSupportedTypes;
-(void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadImportantItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemProviderItems;
-(id)extensionItemName;
-(BOOL)itemProvidersSupportType:(id)arg1 ;
-(NSArray *)extensionSubItems;
-(void)setExtensionSubItems:(NSArray *)arg1 ;
@end

