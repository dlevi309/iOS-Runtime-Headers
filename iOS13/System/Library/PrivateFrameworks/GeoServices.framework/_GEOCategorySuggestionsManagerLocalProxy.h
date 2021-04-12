/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOCategorySuggestionsManagerServerProxy.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSString;

@interface _GEOCategorySuggestionsManagerLocalProxy : NSObject <GEOCategorySuggestionsManagerServerProxy, GEOResourceManifestTileGroupObserver> {

	id _urlsChangedListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)_updateIfNecessary;
-(void)updateCachedSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
@end

