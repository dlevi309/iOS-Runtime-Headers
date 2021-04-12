/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/


@class NSString;

@interface BMStoreConfig : NSObject {

	NSString* _datastorePath;
	unsigned long long _segmentSize;
	unsigned long long _datastoreVersion;

}

@property (nonatomic,readonly) unsigned long long datastoreVersion;              //@synthesize datastoreVersion=_datastoreVersion - In the implementation block
@property (nonatomic,readonly) NSString * datastorePath;                         //@synthesize datastorePath=_datastorePath - In the implementation block
@property (nonatomic,readonly) unsigned long long segmentSize;                   //@synthesize segmentSize=_segmentSize - In the implementation block
+(id)newPublicStreamDefaultConfiguration;
+(id)newStreamDefaultConfigurationForPublicStream:(BOOL)arg1 ;
+(id)sharedStreamConfigurationWithVersion:(unsigned long long)arg1 ;
+(id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)arg1 ;
-(NSString *)datastorePath;
-(id)init;
-(unsigned long long)datastoreVersion;
-(id)initWithStoreVersion:(unsigned long long)arg1 datastorePath:(id)arg2 maxAllowedMappedPages:(unsigned long long)arg3 segmentSize:(unsigned long long)arg4 segmentResizeFactor:(float)arg5 segmentPaddingFactor:(float)arg6 ;
-(unsigned long long)segmentSize;
-(id)initWithStoreBasePath:(id)arg1 segmentSize:(unsigned long long)arg2 ;
-(id)initWithStoreVersion:(unsigned long long)arg1 storeBasePath:(id)arg2 segmentSize:(unsigned long long)arg3 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

