/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSArray, IKChangeSet, NSDictionary;


@protocol IKDataSourceElementImplementing <NSObject>
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,readonly) IKChangeSet * itemsChangeSet; 
@property (nonatomic,copy,readonly) NSDictionary * indexTitles; 
@property (nonatomic,readonly) NSArray * masterPrototypes; 
@property (nonatomic,copy,readonly) NSArray * proxiedItemElements; 
@optional
-(void)resetImplicitUpdates;
-(NSArray *)masterPrototypes;
-(NSArray *)proxiedItemElements;
-(id)masterPrototypeForItemAtIndex:(unsigned long long)arg1;
-(id)proxyElementForLoadedChildElement:(id)arg1;
-(BOOL)canProxyUnloadedChildElement:(id)arg1;

@required
-(NSDictionary *)indexTitles;
-(long long)numberOfItems;
-(void)teardown;
-(NSArray *)prototypes;
-(id)elementForItemAtIndex:(long long)arg1;
-(long long)indexOfItemForElement:(id)arg1;
-(void)loadIndex:(long long)arg1;
-(void)unloadIndex:(long long)arg1;
-(IKChangeSet *)itemsChangeSet;
-(void)initializeWithElementFactory:(id)arg1;
-(void)configureUpdatesWithImplementation:(id)arg1;
-(void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(/*^block*/id)arg2;
-(id)prototypeForItemAtIndex:(long long)arg1;
-(void)resetUpdates;
-(void)updateStylesUsingUpdater:(/*^block*/id)arg1;

@end

