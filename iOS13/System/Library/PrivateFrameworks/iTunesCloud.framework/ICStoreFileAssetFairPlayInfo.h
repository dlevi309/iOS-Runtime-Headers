/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData;

@interface ICStoreFileAssetFairPlayInfo : NSObject <NSCopying> {

	NSDictionary* _responseSinfDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * responseSinfDictionary;                    //@synthesize responseSinfDictionary=_responseSinfDictionary - In the implementation block
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSData * dpInfoData; 
@property (nonatomic,copy,readonly) NSData * pinfData; 
@property (nonatomic,copy,readonly) NSData * sinfData; 
@property (nonatomic,copy,readonly) NSData * sinf2Data; 
@property (nonatomic,copy,readonly) NSDictionary * purchaseBundleSinfDictionary; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)identifier;
-(id)initWithResponseSinfDictionary:(id)arg1 ;
-(NSDictionary *)responseSinfDictionary;
-(NSData *)dpInfoData;
-(NSData *)pinfData;
-(NSData *)sinfData;
-(NSData *)sinf2Data;
-(NSDictionary *)purchaseBundleSinfDictionary;
@end

