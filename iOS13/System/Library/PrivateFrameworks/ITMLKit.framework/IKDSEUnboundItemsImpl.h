/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKDataSourceElementImplementing.h>

@class NSArray, IKChangeSet, NSDictionary, IKDataSourceElement, NSString;

@interface IKDSEUnboundItemsImpl : NSObject <IKDataSourceElementImplementing> {

	IKDataSourceElement* _dataSourceElement;
	NSArray* _itemElements;
	IKChangeSet* _itemsChangeSet;

}

@property (nonatomic,copy) NSArray * itemElements;                                          //@synthesize itemElements=_itemElements - In the implementation block
@property (nonatomic,retain) IKChangeSet * itemsChangeSet;                                  //@synthesize itemsChangeSet=_itemsChangeSet - In the implementation block
@property (nonatomic,__weak,readonly) IKDataSourceElement * dataSourceElement;              //@synthesize dataSourceElement=_dataSourceElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,copy,readonly) NSDictionary * indexTitles; 
@property (nonatomic,readonly) NSArray * masterPrototypes; 
@property (nonatomic,copy,readonly) NSArray * proxiedItemElements; 
-(void)teardown;
-(long long)numberOfItems;
-(NSArray *)prototypes;
-(NSDictionary *)indexTitles;
-(IKChangeSet *)itemsChangeSet;
-(void)setItemsChangeSet:(IKChangeSet *)arg1 ;
-(id)initWithDataSourceElement:(id)arg1 ;
-(NSArray *)proxiedItemElements;
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
-(NSArray *)itemElements;
-(void)setItemElements:(NSArray *)arg1 ;
@end

