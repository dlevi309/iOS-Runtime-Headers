/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PLPrefetchResourceIdentifier : NSObject <NSCopying> {

	unsigned _version;
	NSString* _assetUuid;
	unsigned long long _cplType;

}

@property (nonatomic,readonly) NSString * assetUuid;                    //@synthesize assetUuid=_assetUuid - In the implementation block
@property (nonatomic,readonly) unsigned version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long cplType;              //@synthesize cplType=_cplType - In the implementation block
+(id)resourceDescriptionWithAssetUuid:(id)arg1 resourceVersion:(unsigned)arg2 cplType:(unsigned long long)arg3 ;
-(unsigned long long)cplType;
-(NSString *)assetUuid;
-(id)initWithAssetUuid:(id)arg1 version:(unsigned)arg2 cplType:(unsigned long long)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

