/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class NSData;

@interface _FBSCDHashCacheInfo : NSObject {

	unsigned _cachedCodeDirectoryHashType;
	NSData* _cachedCodeDirectoryHash;

}

@property (nonatomic,readonly) NSData * cachedCodeDirectoryHash;                  //@synthesize cachedCodeDirectoryHash=_cachedCodeDirectoryHash - In the implementation block
@property (nonatomic,readonly) unsigned cachedCodeDirectoryHashType;              //@synthesize cachedCodeDirectoryHashType=_cachedCodeDirectoryHashType - In the implementation block
+(id)cacheInfoWithData:(id)arg1 hashType:(unsigned)arg2 ;
-(NSData *)cachedCodeDirectoryHash;
-(unsigned)cachedCodeDirectoryHashType;
@end

