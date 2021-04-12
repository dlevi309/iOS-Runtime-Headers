/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIAbstractEntityProviderViewElement.h>
#import <libobjc.A.dylib/SKUIEntityProviding.h>

@class RadioModel, NSArray, NSMapTable, NSString;

@interface SKUIRadioEntityProviderViewElement : SKUIAbstractEntityProviderViewElement <SKUIEntityProviding> {

	BOOL _hasValidStations;
	long long _countLimit;
	long long _radioEntityProviderType;
	RadioModel* _radioModel;
	NSArray* _stations;
	NSMapTable* _stationToStationEntityValueProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSections;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(id)_stations;
-(void)dealloc;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(id)indexBarEntryEntityValueProviderAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(id)sectionEntityValueProviderAtIndex:(long long)arg1 ;
-(void)_invalidateWithContext:(id)arg1 ;
-(id)_entityValueProviderForStation:(id)arg1 ;
@end

