/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface _WGConcreteDataSource : NSObject {

	NSMutableArray* _observers;
	NSMutableDictionary* _identifiersToData;

}

@property (nonatomic,readonly) NSArray * dataIdentifiers; 
@property (nonatomic,readonly) NSArray * data; 
-(id)init;
-(NSArray *)data;
-(void)addObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(NSArray *)dataIdentifiers;
-(id)datumWithIdentifier:(id)arg1 ;
@end

