/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MAAssetDiff : NSObject <NSSecureCoding> {

	unsigned long long _diffRaw;
	unsigned long long _diff;
	unsigned long long _mask;
	NSString* _description;
	NSString* _assessment;

}
+(BOOL)supportsSecureCoding;
+(id)allowEverythingDifferent;
+(id)requireSameAssetTypeAndAssetId;
+(id)requireSameAssetTypeAndDownloadContent;
+(id)requireSameAssetTypeAndAllAttributes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initDifferentAssetType:(BOOL)arg1 assetId:(BOOL)arg2 attributes:(BOOL)arg3 assetIdAttributes:(BOOL)arg4 dynamicAssetId:(BOOL)arg5 nonIdAttributes:(BOOL)arg6 content:(BOOL)arg7 url:(BOOL)arg8 policy:(BOOL)arg9 ;
-(unsigned long long)category;
-(id)initFromDiff:(unsigned long long)arg1 ;
-(id)initFromInverseOfCategories:(unsigned long long)arg1 ;
-(BOOL)isAnythingDifferent;
-(BOOL)isSameAssetType;
-(BOOL)isSameForAllAttributes;
-(BOOL)isSameAssetId;
-(BOOL)isSameForNonAssetIdAttributes;
-(BOOL)isSameDownloadContent;
-(BOOL)isSameDownloadUrl;
-(BOOL)isSameDownloadPolicy;
-(BOOL)hasOnlyAllowedDifferences:(id)arg1 ;
-(id)description;
-(id)summary;
-(id)initWithCoder:(id)arg1 ;
@end

