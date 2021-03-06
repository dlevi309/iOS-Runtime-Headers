/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEODataSaverTileLoaderProxy.h>

@class NSString;

@interface GEODataSaverTileLoaderLocalProxy : NSObject <GEODataSaverTileLoaderProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDataSaverEnabled,nonatomic,readonly) BOOL dataSaverEnabled; 
-(id)init;
-(BOOL)isDataSaverEnabled;
-(void)_debug_initiateDataSaverPreload;
-(void)_removeOldRegionStateFromDisk;
@end

