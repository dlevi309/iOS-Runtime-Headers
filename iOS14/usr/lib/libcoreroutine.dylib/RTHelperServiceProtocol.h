/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTHelperServiceProtocol
@required
-(void)fetchMapItemFromHandle:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchMapItemsFromLocation:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchMapItemsFromLocations:(id)arg1 accessPoints:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 options:(id)arg5 handler:(/*^block*/id)arg6;
-(void)fetchCountryAndSubdivisionCodesFromLocation:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchMapItemsFromAddressDictionary:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)createMapItemWithIdentifier:(id)arg1 geoMapItemStorage:(id)arg2 source:(unsigned long long)arg3 creationDate:(id)arg4 handler:(/*^block*/id)arg5;
-(void)fetchMapItemsFromNaturalLanguageQuery:(id)arg1 location:(id)arg2 options:(id)arg3 handler:(/*^block*/id)arg4;
-(void)fetchMapItemsFromAddressString:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchPostalAddressForMapItem:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;

@end

