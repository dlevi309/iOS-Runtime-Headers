/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)dataIdentifiers;
-(void)addObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(NSArray *)data;
-(void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(id)datumWithIdentifier:(id)arg1 ;
-(void)removeObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

