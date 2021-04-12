/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEODataSaverTileLoaderProxy.h>

@class NSString;

@interface GEODataSaverTileLoaderLocalProxy : NSObject <GEODataSaverTileLoaderProxy>

@property (getter=isDataSaverEnabled,nonatomic,readonly) BOOL dataSaverEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_removeOldRegionStateFromDisk;
-(void)_debug_initiateDataSaverPreload;
-(BOOL)isDataSaverEnabled;
@end

