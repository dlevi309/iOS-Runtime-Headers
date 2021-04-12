/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <DataDeliveryServices/DataDeliveryServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DDSAttributeFilter;

@interface DDSAssetQuery : NSObject <NSSecureCoding> {

	BOOL _localOnly;
	BOOL _installedOnly;
	BOOL _latestOnly;
	NSString* _assetType;
	DDSAttributeFilter* _filter;

}

@property (nonatomic,readonly) NSString * assetType;                     //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) DDSAttributeFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL localOnly;                             //@synthesize localOnly=_localOnly - In the implementation block
@property (assign,nonatomic) BOOL installedOnly;                         //@synthesize installedOnly=_installedOnly - In the implementation block
@property (assign,nonatomic) BOOL latestOnly;                            //@synthesize latestOnly=_latestOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)localOnly;
-(DDSAttributeFilter *)filter;
-(void)setLocalOnly:(BOOL)arg1 ;
-(id)initWithAssetType:(id)arg1 ;
-(NSString *)assetType;
-(BOOL)installedOnly;
-(id)initWithAssetType:(id)arg1 filter:(id)arg2 ;
-(void)setInstalledOnly:(BOOL)arg1 ;
-(BOOL)latestOnly;
-(BOOL)isEqualToAssetQuery:(id)arg1 ;
-(void)setLatestOnly:(BOOL)arg1 ;
@end

