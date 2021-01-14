/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDictionary;

@interface GEOLocalizationRegionsInfo : NSObject {

	NSDictionary* _regions;
	os_unfair_lock_s _regionsLock;

}
-(id)init;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1 language:(id)arg2 ;
-(void)reset;
@end

