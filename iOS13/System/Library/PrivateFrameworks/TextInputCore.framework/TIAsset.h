/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TIAssetAttributes, NSURL, NSArray;

@interface TIAsset : NSObject {

	long long _numberOfAssertions;
	TIAssetAttributes* _attributes;
	NSURL* _url;
	long long _contentVersion;
	long long _compatibilityVersion;
	NSArray* _contents;
	unsigned long long _sizeInBytes;

}

@property (nonatomic,readonly) TIAssetAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) NSArray * contents;                          //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL isCompatible; 
@property (nonatomic,readonly) unsigned long long sizeInBytes;              //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
+(long long)supportedCompatibilityVersion;
+(BOOL)shouldLenientlyMatchWithContentItemsForRegion:(id)arg1 ;
+(id)knownAssetTypes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)contents;
-(TIAssetAttributes *)attributes;
-(NSURL *)url;
-(long long)compatibilityVersion;
-(unsigned long long)sizeInBytes;
-(id)recursiveDescription;
-(long long)contentVersion;
-(BOOL)isCompatible;
-(void)addAssertion;
-(void)removeAssertion;
-(id)initWithASAsset:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 url:(id)arg2 contentVersion:(long long)arg3 compatibilityVersion:(long long)arg4 sizeInBytes:(unsigned long long)arg5 contents:(id)arg6 ;
-(id)assetContentItemsMatching:(id)arg1 ;
-(id)laterAsset:(id)arg1 ;
-(BOOL)hasAssertions;
@end

