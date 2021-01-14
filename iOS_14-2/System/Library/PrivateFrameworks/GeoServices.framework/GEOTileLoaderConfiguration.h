/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(void)setDiskCacheLocation:(NSString *)arg1 ;
-(Class)serverProxyClass;
-(void)setServerProxyClass:(Class)arg1 ;
-(NSString *)diskCacheLocation;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(void)setMemoryCacheCostLimit:(unsigned long long)arg1 ;
-(void)setManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(void)setMemoryCacheCountLimit:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheCountLimit;
-(unsigned long long)memoryCacheCostLimit;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

