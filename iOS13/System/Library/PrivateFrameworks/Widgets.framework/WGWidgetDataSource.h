/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <libobjc.A.dylib/_WGDataSource.h>
#import <libobjc.A.dylib/WGDataSource.h>

@class NSString, _WGConcreteDataSource, NSArray;

@interface WGWidgetDataSource : NSObject <_WGDataSource, WGDataSource> {

	NSString* _dataSourceIdentifier;
	_WGConcreteDataSource* _concreteDataSource;

}

@property (setter=_setConcreteDataSource:,getter=_concreteDataSource,nonatomic,retain) _WGConcreteDataSource * concreteDataSource;              //@synthesize concreteDataSource=_concreteDataSource - In the implementation block
@property (nonatomic,readonly) NSArray * widgetIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * dataSourceIdentifier;                                                                                 //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * parentDataSourceIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)dataSourceIdentifier;
-(void)replaceWithDatum:(id)arg1 ;
-(void)removeDatumWithIdentifier:(id)arg1 ;
-(NSArray *)widgetIdentifiers;
-(id)widgetDatumWithIdentifier:(id)arg1 ;
-(void)removeWidgetObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addWidgetObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_concreteDataSource;
-(NSString *)parentDataSourceIdentifier;
-(void)_setConcreteDataSource:(id)arg1 ;
@end

