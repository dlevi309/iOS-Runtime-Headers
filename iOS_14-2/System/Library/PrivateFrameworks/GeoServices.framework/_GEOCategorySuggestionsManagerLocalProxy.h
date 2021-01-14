/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)init;
-(void)_updateIfNecessary;
-(void)updateCachedSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

