/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,copy,readonly) NSDictionary * indexTitles; 
@property (nonatomic,readonly) NSArray * masterPrototypes; 
@property (nonatomic,copy,readonly) NSArray * proxiedItemElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)indexTitles;
-(long long)numberOfItems;
-(void)teardown;
-(NSArray *)prototypes;
-(id)elementForItemAtIndex:(long long)arg1 ;
-(long long)indexOfItemForElement:(id)arg1 ;
-(void)loadIndex:(long long)arg1 ;
-(void)unloadIndex:(long long)arg1 ;
-(IKChangeSet *)itemsChangeSet;
-(void)setItemsChangeSet:(IKChangeSet *)arg1 ;
-(id)initWithDataSourceElement:(id)arg1 ;
-(NSArray *)proxiedItemElements;
-(void)initializeWithElementFactory:(id)arg1 ;
-(void)configureUpdatesWithImplementation:(id)arg1 ;
-(void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(/*^block*/id)arg2 ;
-(id)prototypeForItemAtIndex:(long long)arg1 ;
-(void)resetUpdates;
-(void)updateStylesUsingUpdater:(/*^block*/id)arg1 ;
-(IKDataSourceElement *)dataSourceElement;
-(NSArray *)itemElements;
-(void)setItemElements:(NSArray *)arg1 ;
@end

