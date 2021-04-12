/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MAAbsoluteAssetId : NSObject <NSSecureCoding> {

	NSString* _assetId;
	NSString* _assetType;

}

@property (nonatomic,retain) NSString * assetId;                //@synthesize assetId=_assetId - In the implementation block
@property (nonatomic,retain) NSString * assetType;              //@synthesize assetType=_assetType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)assetId;
-(NSString *)assetType;
-(void)setAssetType:(NSString *)arg1 ;
-(id)initWithAssetId:(id)arg1 forAssetType:(id)arg2 ;
-(void)setAssetId:(NSString *)arg1 ;
@end

