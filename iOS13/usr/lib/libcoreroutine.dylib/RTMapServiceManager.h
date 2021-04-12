/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTHelperServiceProtocol.h>

@class NSXPCConnection;

@interface RTMapServiceManager : RTService <RTHelperServiceProtocol> {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(id)init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)_shutdown;
-(id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(id)mapItemWithIdentifier:(id)arg1 geoMapItem:(id)arg2 source:(unsigned long long)arg3 creationDate:(id)arg4 error:(id*)arg5 ;
-(void)fetchMapItemFromHandle:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchMapItemsFromLocation:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchMapItemsFromLocations:(id)arg1 accessPoints:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 options:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)fetchMapItemsFromAddressDictionary:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)mapItemWithIdentifier:(id)arg1 geoMapItemStorage:(id)arg2 source:(unsigned long long)arg3 creationDate:(id)arg4 error:(id*)arg5 ;
-(void)fetchMapItemsFromNaturalLanguageQuery:(id)arg1 location:(id)arg2 options:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchMapItemsFromAddressString:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)createMapItemWithIdentifier:(id)arg1 geoMapItemStorage:(id)arg2 source:(unsigned long long)arg3 creationDate:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)fetchMapItemWithIdentifier:(id)arg1 geoMapItem:(id)arg2 source:(unsigned long long)arg3 creationDate:(id)arg4 handler:(/*^block*/id)arg5 ;
@end

