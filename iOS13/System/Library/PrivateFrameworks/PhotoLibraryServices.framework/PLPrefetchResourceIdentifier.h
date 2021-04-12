/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)version;
-(unsigned long long)cplType;
-(NSString *)assetUuid;
-(id)initWithAssetUuid:(id)arg1 version:(unsigned)arg2 cplType:(unsigned long long)arg3 ;
@end

