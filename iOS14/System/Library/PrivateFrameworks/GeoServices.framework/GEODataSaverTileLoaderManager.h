/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_debug_initiateDataSaverPreload;
-(BOOL)isDataSaverEnabled;
@end

