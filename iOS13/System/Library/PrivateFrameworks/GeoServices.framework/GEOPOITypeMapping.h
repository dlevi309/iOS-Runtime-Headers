/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSSet, NSDictionary, geo_isolater, GEOResourceManifestManager, GEOResourceManager, NSString;

@interface GEOPOITypeMapping : NSObject <GEOResourceManifestTileGroupObserver> {

	NSSet* _alwaysVisibleTypes;
	NSDictionary* _categoryToTypeMapping;
	NSDictionary* _typeToCategoryMapping;
	geo_isolater* _accessLock;
	GEOResourceManifestManager* _manifestManager;
	GEOResourceManager* _resourceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMapping;
-(id)init;
-(void)dealloc;
-(void)_tearDown;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)typesForPOICategories:(id)arg1 ;
-(BOOL)isAlwaysVisiblePOIType:(int)arg1 ;
-(id)categoryForPOIType:(int)arg1 ;
-(id)initWithResourceManifestManager:(id)arg1 resourceManager:(id)arg2 ;
-(id)alwaysVisibleTypes;
-(id)typeToCategoryMapping;
-(id)categoryToTypeMapping;
-(void)parsePOICategoriesJSON:(id)arg1 ;
-(id)parseVisiblePOITypesJSON:(id)arg1 ;
-(BOOL)parseCategoryMappingJSON:(id)arg1 categoryToPOIType:(id*)arg2 POITypeToCategory:(id*)arg3 ;
-(void)loadPOICategoriesJSON;
-(void)clearCachedValues;
@end

