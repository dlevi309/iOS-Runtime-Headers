/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEODataSaverTileLoaderProxy.h>

@protocol GEODataSaverTileLoaderProxy;
@class NSString;

@interface GEODataSaverTileLoaderManager : NSObject <GEODataSaverTileLoaderProxy> {

	id<GEODataSaverTileLoaderProxy> _proxy;

}

@property (getter=isDataSaverEnabled,nonatomic,readonly) BOOL dataSaverEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)useProxyClass:(Class)arg1 ;
-(id)init;
-(BOOL)isDataSaverEnabled;
-(void)_debug_initiateDataSaverPreload;
@end

