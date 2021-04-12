/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUBarButtonItemCollectionDataSource;
@class NSArray, NSIndexSet, NSCache, NSMutableDictionary, UIBarButtonItem, NSDictionary;

@interface PUBarButtonItemCollection : NSObject {

	NSArray* _identifiersOrder;
	NSIndexSet* _centeredItemIdentifiers;
	id<PUBarButtonItemCollectionDataSource> _dataSource;
	unsigned long long __options;
	NSCache* __configurationsCache;
	NSMutableDictionary* __barButtonItems;
	NSIndexSet* __previousRequestedSet;
	NSArray* __previousResult;
	UIBarButtonItem* __flexibleSpaceBarButtonItem;
	UIBarButtonItem* __placeholderBarButtonItem;

}

@property (nonatomic,readonly) unsigned long long _options;                                                  //@synthesize _options=__options - In the implementation block
@property (nonatomic,readonly) NSCache * _configurationsCache;                                               //@synthesize _configurationsCache=__configurationsCache - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _barButtonItems;                                        //@synthesize _barButtonItems=__barButtonItems - In the implementation block
@property (setter=_setPreviousRequestedSet:,nonatomic,copy) NSIndexSet * _previousRequestedSet;              //@synthesize _previousRequestedSet=__previousRequestedSet - In the implementation block
@property (setter=_setPreviousResult:,nonatomic,retain) NSArray * _previousResult;                           //@synthesize _previousResult=__previousResult - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _flexibleSpaceBarButtonItem;                                //@synthesize _flexibleSpaceBarButtonItem=__flexibleSpaceBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _placeholderBarButtonItem;                                  //@synthesize _placeholderBarButtonItem=__placeholderBarButtonItem - In the implementation block
@property (nonatomic,retain) NSArray * identifiersOrder;                                                     //@synthesize identifiersOrder=_identifiersOrder - In the implementation block
@property (nonatomic,retain) NSIndexSet * centeredItemIdentifiers;                                           //@synthesize centeredItemIdentifiers=_centeredItemIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) id<PUBarButtonItemCollectionDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSDictionary * barButtonItems; 
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)barButtonItemForIdentifier:(long long)arg1 ;
-(NSArray *)identifiersOrder;
-(unsigned long long)_options;
-(id)init;
-(UIBarButtonItem *)_placeholderBarButtonItem;
-(id)_newEntryForIdentifiers:(id)arg1 ;
-(NSMutableDictionary *)_barButtonItems;
-(NSIndexSet *)_previousRequestedSet;
-(NSCache *)_configurationsCache;
-(void)setIdentifiersOrder:(NSArray *)arg1 ;
-(NSDictionary *)barButtonItems;
-(id<PUBarButtonItemCollectionDataSource>)dataSource;
-(long long)identifierForCustomButton:(id)arg1 ;
-(id)_arrangedBarButtonItems:(id)arg1 identifiers:(id)arg2 ;
-(void)setDataSource:(id<PUBarButtonItemCollectionDataSource>)arg1 ;
-(long long)identifierForBarButtonItem:(id)arg1 ;
-(void)_setPreviousRequestedSet:(id)arg1 ;
-(void)setCenteredItemIdentifiers:(NSIndexSet *)arg1 ;
-(NSIndexSet *)centeredItemIdentifiers;
-(void)_setPreviousResult:(id)arg1 ;
-(UIBarButtonItem *)_flexibleSpaceBarButtonItem;
-(void)_resetSet;
-(id)orderedBarButtonsItemsForIdentifiers:(id)arg1 ;
-(void)_centersButtonsIfNeeded:(id)arg1 identifiers:(id)arg2 ;
-(NSArray *)_previousResult;
@end

