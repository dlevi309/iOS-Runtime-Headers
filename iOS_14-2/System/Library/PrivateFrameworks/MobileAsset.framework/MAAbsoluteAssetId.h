/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MAAbsoluteAssetId : NSObject <NSSecureCoding> {

	NSString* _allAttributesHash;
	NSString* _assetIdHash;
	NSString* _nonAssetIdHash;
	NSString* _downloadContentHash;
	NSString* _downloadUrlHash;
	NSString* _downloadPolicyHash;
	NSString* _pallasAssetIdHash;
	NSString* _assetId;
	NSString* _assetType;

}

@property (nonatomic,retain) NSString * assetId;                //@synthesize assetId=_assetId - In the implementation block
@property (nonatomic,retain) NSString * assetType;              //@synthesize assetType=_assetType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)assetType;
-(NSString *)assetId;
-(id)contentHash;
-(id)policyHash;
-(id)assetIdHash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAssetId:(NSString *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(id)initWithAssetId:(id)arg1 forAssetType:(id)arg2 attributes:(id)arg3 ;
-(id)allAttributesHash;
-(id)pallasDynamicAssetIdHash;
-(BOOL)hasOnlyAssetTypeAndId;
-(id)initWithAssetId:(id)arg1 forAssetType:(id)arg2 ;
-(id)diffFromAsset:(id)arg1 ;
-(id)diffFromAssetId:(id)arg1 assetType:(id)arg2 attributes:(id)arg3 ;
-(id)urlHash;
-(id)description;
-(id)summary;
-(id)initWithCoder:(id)arg1 ;
-(id)nonIdHash;
-(id)diffFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

