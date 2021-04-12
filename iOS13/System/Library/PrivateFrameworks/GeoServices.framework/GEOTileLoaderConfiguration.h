/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOResourceManifestConfiguration, NSLocale;

@interface GEOTileLoaderConfiguration : NSObject <NSCopying> {

	Class _serverProxyClass;
	unsigned long long _memoryCacheCountLimit;
	unsigned long long _memoryCacheCostLimit;
	NSString* _diskCacheLocation;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;

}

@property (assign,nonatomic) Class serverProxyClass;                                                //@synthesize serverProxyClass=_serverProxyClass - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCacheCountLimit;                              //@synthesize memoryCacheCountLimit=_memoryCacheCountLimit - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCacheCostLimit;                               //@synthesize memoryCacheCostLimit=_memoryCacheCostLimit - In the implementation block
@property (nonatomic,copy) NSString * diskCacheLocation;                                            //@synthesize diskCacheLocation=_diskCacheLocation - In the implementation block
@property (nonatomic,retain) GEOResourceManifestConfiguration * manifestConfiguration;              //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                                     //@synthesize locale=_locale - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(Class)serverProxyClass;
-(void)setServerProxyClass:(Class)arg1 ;
-(unsigned long long)memoryCacheCountLimit;
-(void)setMemoryCacheCountLimit:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheCostLimit;
-(void)setMemoryCacheCostLimit:(unsigned long long)arg1 ;
-(NSString *)diskCacheLocation;
-(void)setDiskCacheLocation:(NSString *)arg1 ;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(void)setManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
@end

