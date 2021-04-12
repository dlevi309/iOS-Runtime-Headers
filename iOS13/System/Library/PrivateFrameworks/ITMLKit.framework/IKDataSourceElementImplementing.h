/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)teardown;
-(long long)numberOfItems;
-(NSArray *)prototypes;
-(NSDictionary *)indexTitles;
-(IKChangeSet *)itemsChangeSet;
-(void)initializeWithElementFactory:(id)arg1;
-(void)configureUpdatesWithImplementation:(id)arg1;
-(void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(/*^block*/id)arg2;
-(id)prototypeForItemAtIndex:(long long)arg1;
-(id)elementForItemAtIndex:(long long)arg1;
-(long long)indexOfItemForElement:(id)arg1;
-(void)loadIndex:(long long)arg1;
-(void)unloadIndex:(long long)arg1;
-(void)resetUpdates;
-(void)updateStylesUsingUpdater:(/*^block*/id)arg1;

@end

