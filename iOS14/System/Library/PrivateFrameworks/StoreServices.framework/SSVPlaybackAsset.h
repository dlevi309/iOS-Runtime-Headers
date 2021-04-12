/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSDictionary, NSString, NSArray;

@interface SSVPlaybackAsset : NSObject {

	NSDictionary* _assetDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * assetDictionary;              //@synthesize assetDictionary=_assetDictionary - In the implementation block
@property (nonatomic,readonly) NSString * downloadKey; 
@property (nonatomic,readonly) NSString * flavor; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSArray * sinfs; 
-(NSString *)URLString;
-(NSDictionary *)assetDictionary;
-(NSArray *)sinfs;
-(id)initWithAssetDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)downloadKey;
-(NSString *)flavor;
-(BOOL)isEqual:(id)arg1 ;
@end

