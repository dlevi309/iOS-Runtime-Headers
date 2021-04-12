/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class GEOAltitudeManifestReserved, NSString;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver> {

	GEOAltitudeManifestReserved* _reserved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)commonInit;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)_reloadManifest;
-(void)parseManifest:(id)arg1 ;
-(id)initWithoutObserver;
-(BOOL)parseXml:(id)arg1 ;
-(BOOL)isValidTourId:(unsigned long long)arg1 ;
-(unsigned)versionForRegion:(unsigned)arg1 ;
-(BOOL)hasDataVersionForRegion:(unsigned)arg1 ;
-(unsigned)dataVersionForRegion:(unsigned)arg1 ;
-(id)nameForRegion:(unsigned)arg1 ;
-(id)tourIdsForRegion:(unsigned)arg1 ;
-(id)tripIdsForRegion:(unsigned)arg1 ;
-(id)availableRegions;
@end

