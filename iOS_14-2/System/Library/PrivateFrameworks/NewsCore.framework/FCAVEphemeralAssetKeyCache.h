/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAVAssetKeyCacheType.h>

@class FCThreadSafeMutableDictionary, NSData;

@interface FCAVEphemeralAssetKeyCache : NSObject <FCAVAssetKeyCacheType> {

	FCThreadSafeMutableDictionary* _dictionary;
	NSData* _keyServerCertificate;

}

@property (nonatomic,readonly) FCThreadSafeMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy) NSData * keyServerCertificate;                               //@synthesize keyServerCertificate=_keyServerCertificate - In the implementation block
-(id)init;
-(void)clearKeyServerCertificate;
-(NSData *)keyServerCertificate;
-(void)saveAssetKeyData:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 forURI:(id)arg4 ;
-(void)saveKeyServerCertificate:(id)arg1 ;
-(FCThreadSafeMutableDictionary *)dictionary;
-(void)setKeyServerCertificate:(NSData *)arg1 ;
-(id)assetKeyForURI:(id)arg1 ;
-(void)removeAllAssetKeys;
@end

