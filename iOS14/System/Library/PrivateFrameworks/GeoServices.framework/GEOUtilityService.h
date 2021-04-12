/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOUtilityServiceProxy.h>

@protocol GEOUtilityServiceProxy;
@class NSString;

@interface GEOUtilityService : NSObject <GEOUtilityServiceProxy> {

	id<GEOUtilityServiceProxy> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
+(void)useProxy:(Class)arg1 ;
-(id)init;
-(id)getHomeDirectoryPath;
-(id)getGeoServicesCacheDirectoryPath;
-(void)getCurrentGeoServicesState:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

