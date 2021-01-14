/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKDataSourceElementImplementing.h>

@class IKDataSourceElement, IKChangeSet, IKAppDataSet, NSDictionary, _IKDSEPrototypeBundle, NSMutableIndexSet, NSMutableDictionary, NSArray, NSString;

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
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,copy,readonly) NSDictionary * indexTitles; 
@property (nonatomic,readonly) NSArray * masterPrototypes; 
@property (nonatomic,copy,readonly) NSArray * proxiedItemElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canProxiedItemElementsBeUpdatedWithLoadedElements;
-(NSDictionary *)indexTitles;
-(long long)numberOfItems;
-(void)setDataSet:(IKAppDataSet *)arg1 ;
-(NSString *)debugDescription;
-(IKAppDataSet *)dataSet;
-(void)teardown;
-(NSArray *)prototypes;
-(id)elementForItemAtIndex:(long long)arg1 ;
-(long long)indexOfItemForElement:(id)arg1 ;
-(void)loadIndex:(long long)arg1 ;
-(void)unloadIndex:(long long)arg1 ;
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

