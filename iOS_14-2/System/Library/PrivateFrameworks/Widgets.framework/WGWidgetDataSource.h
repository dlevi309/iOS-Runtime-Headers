/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * dataSourceIdentifier;                                                                                 //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * parentDataSourceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeWidgetObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_concreteDataSource;
-(NSArray *)widgetIdentifiers;
-(void)_setConcreteDataSource:(id)arg1 ;
-(NSString *)dataSourceIdentifier;
-(id)widgetDatumWithIdentifier:(id)arg1 ;
-(void)addWidgetObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)description;
-(NSString *)parentDataSourceIdentifier;
-(void)removeDatumWithIdentifier:(id)arg1 ;
-(void)replaceWithDatum:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

