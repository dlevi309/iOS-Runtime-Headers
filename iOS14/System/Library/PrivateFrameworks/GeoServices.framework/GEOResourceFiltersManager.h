/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOResourceFiltersManagerDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class GEOResourceManifestConfiguration, GEOActiveResourceFilters, NSSet;

@interface GEOResourceFiltersManager : NSObject {

	GEOResourceManifestConfiguration* _configuration;
	GEOActiveResourceFilters* _activeFilters;
	os_unfair_lock_s _lock;
	id<GEOResourceFiltersManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEOResourceFiltersManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * activeScales; 
@property (nonatomic,readonly) NSSet * activeScenarios; 
-(void)activateScale:(int)arg1 ;
-(void)_writeToDisk;
-(id)init;
-(id<GEOResourceFiltersManagerDelegate>)delegate;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_activateFilters:(/*^block*/id)arg1 setValueBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<GEOResourceFiltersManagerDelegate>)arg1 ;
-(NSSet *)activeScales;
-(void)deactivateScale:(int)arg1 ;
-(void)_deactivateFilters:(/*^block*/id)arg1 ;
-(NSSet *)activeScenarios;
-(void)deactivateScenario:(int)arg1 ;
-(void)activateScenario:(int)arg1 ;
@end

