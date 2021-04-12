/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(id)_stations;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(id)indexBarEntryEntityValueProviderAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(id)sectionEntityValueProviderAtIndex:(long long)arg1 ;
-(void)_invalidateWithContext:(id)arg1 ;
-(id)_entityValueProviderForStation:(id)arg1 ;
@end

