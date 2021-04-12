/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKDataSourceElementImplementing.h>

@class IKDataSourceElement, IKChangeSet, IKAppDataSet, NSDictionary, _IKDSEPrototypeBundle, NSMutableIndexSet, NSMutableDictionary, NSString, NSArray;

@interface IKDSEBoundItemsImpl : NSObject <IKDataSourceElementImplementing> {

	BOOL _visibleIndexRangeIsDirty;
	IKDataSourceElement* _dataSourceElement;
	IKChangeSet* _itemsChangeSet;
	IKAppDataSet* _dataSet;
	NSDictionary* _usedPrototypeMappingsByIdentifier;
	_IKDSEPrototypeBundle* _prototypeBundle;
	NSDictionary* _childrenByItemID;
	NSMutableIndexSet* _visibleIndexSet;
	NSMutableDictionary* _proxiedItemElementsByItemID;

}

@property (nonatomic,retain) IKChangeSet * itemsChangeSet;                                   //@synthesize itemsChangeSet=_itemsChangeSet - In the implementation block
@property (nonatomic,retain) IKAppDataSet * dataSet;                                         //@synthesize dataSet=_dataSet - In the implementation block
@property (nonatomic,copy) NSDictionary * usedPrototypeMappingsByIdentifier;                 //@synthesize usedPrototypeMappingsByIdentifier=_usedPrototypeMappingsByIdentifier - In the implementation block
@property (nonatomic,retain) _IKDSEPrototypeBundle * prototypeBundle;                        //@synthesize prototypeBundle=_prototypeBundle - In the implementation block
@property (nonatomic,copy) NSDictionary * childrenByItemID;                                  //@synthesize childrenByItemID=_childrenByItemID - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * visibleIndexSet;                            //@synthesize visibleIndexSet=_visibleIndexSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * proxiedItemElementsByItemID;              //@synthesize proxiedItemElementsByItemID=_proxiedItemElementsByItemID - In the implementation block
@property (nonatomic,__weak,readonly) IKDataSourceElement * dataSourceElement;               //@synthesize dataSourceElement=_dataSourceElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,copy,readonly) NSDictionary * indexTitles; 
@property (nonatomic,readonly) NSArray * masterPrototypes; 
@property (nonatomic,copy,readonly) NSArray * proxiedItemElements; 
+(BOOL)_canProxiedItemElementsBeUpdatedWithLoadedElements;
-(NSString *)debugDescription;
-(void)teardown;
-(long long)numberOfItems;
-(IKAppDataSet *)dataSet;
-(void)setDataSet:(IKAppDataSet *)arg1 ;
-(NSArray *)prototypes;
-(NSDictionary *)indexTitles;
-(IKChangeSet *)itemsChangeSet;
-(void)setItemsChangeSet:(IKChangeSet *)arg1 ;
-(void)resetImplicitUpdates;
-(id)initWithDataSourceElement:(id)arg1 ;
-(NSArray *)masterPrototypes;
-(NSArray *)proxiedItemElements;
-(id)masterPrototypeForItemAtIndex:(unsigned long long)arg1 ;
-(id)proxyElementForLoadedChildElement:(id)arg1 ;
-(BOOL)canProxyUnloadedChildElement:(id)arg1 ;
-(void)initializeWithElementFactory:(id)arg1 ;
-(void)configureUpdatesWithImplementation:(id)arg1 ;
-(void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(/*^block*/id)arg2 ;
-(id)prototypeForItemAtIndex:(long long)arg1 ;
-(id)elementForItemAtIndex:(long long)arg1 ;
-(long long)indexOfItemForElement:(id)arg1 ;
-(void)loadIndex:(long long)arg1 ;
-(void)unloadIndex:(long long)arg1 ;
-(void)resetUpdates;
-(void)updateStylesUsingUpdater:(/*^block*/id)arg1 ;
-(IKDataSourceElement *)dataSourceElement;
-(NSMutableIndexSet *)visibleIndexSet;
-(_IKDSEPrototypeBundle *)prototypeBundle;
-(NSDictionary *)usedPrototypeMappingsByIdentifier;
-(id)_elementForItemAtIndex:(long long)arg1 ;
-(void)setPrototypeBundle:(_IKDSEPrototypeBundle *)arg1 ;
-(void)_appendVisibleIndexSetWithIndex:(long long)arg1 ;
-(void)setUsedPrototypeMappingsByIdentifier:(NSDictionary *)arg1 ;
-(void)setChildrenByItemID:(NSDictionary *)arg1 ;
-(void)setVisibleIndexSet:(NSMutableIndexSet *)arg1 ;
-(NSMutableDictionary *)proxiedItemElementsByItemID;
-(NSDictionary *)childrenByItemID;
-(id)_prototypeMappingForItemAtIndex:(long long)arg1 ;
-(void)setProxiedItemElementsByItemID:(NSMutableDictionary *)arg1 ;
@end

