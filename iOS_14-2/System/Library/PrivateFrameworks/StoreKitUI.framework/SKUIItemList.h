/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICacheCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSSet, NSArray, NSMutableDictionary;

@interface SKUIItemList : NSObject <SKUICacheCoding, NSCopying> {

	NSMutableArray* _items;
	NSString* _seeAllTitle;
	NSString* _seeAllURLString;
	NSString* _title;
	NSSet* _unavailableItemIdentifiers;

}

@property (nonatomic,copy) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * seeAllTitle;                                     //@synthesize seeAllTitle=_seeAllTitle - In the implementation block
@property (nonatomic,copy) NSString * seeAllURLString;                                 //@synthesize seeAllURLString=_seeAllURLString - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSSet * unavailableItemIdentifiers;                         //@synthesize unavailableItemIdentifiers=_unavailableItemIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addItem:(id)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)addItems:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(NSMutableDictionary *)cacheRepresentation;
-(BOOL)isUnavailableItemIdentifier:(id)arg1 ;
-(void)setUnavailableItemIdentifiers:(NSSet *)arg1 ;
-(NSString *)seeAllTitle;
-(NSString *)seeAllURLString;
-(void)setSeeAllTitle:(NSString *)arg1 ;
-(void)setSeeAllURLString:(NSString *)arg1 ;
-(NSSet *)unavailableItemIdentifiers;
@end

