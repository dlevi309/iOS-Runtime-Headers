/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <DataDeliveryServices/DataDeliveryServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, DDSAttributeFilter, NSObject;

@interface DDSAssetQuery : NSObject <NSSecureCoding> {

	BOOL _localOnly;
	BOOL _installedOnly;
	BOOL _latestOnly;
	BOOL _cachedOnly;
	NSString* _description;
	NSString* _assetType;
	DDSAttributeFilter* _filter;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                            //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) DDSAttributeFilter * filter;                     //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) BOOL localOnly;                                    //@synthesize localOnly=_localOnly - In the implementation block
@property (assign,nonatomic) BOOL installedOnly;                                //@synthesize installedOnly=_installedOnly - In the implementation block
@property (assign,nonatomic) BOOL latestOnly;                                   //@synthesize latestOnly=_latestOnly - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                   //@synthesize cachedOnly=_cachedOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)cacheKey;
-(void)setCachedOnly:(BOOL)arg1 ;
-(BOOL)cachedOnly;
-(NSString *)assetType;
-(DDSAttributeFilter *)filter;
-(id)init;
-(void)setLocalOnly:(BOOL)arg1 ;
-(BOOL)latestOnly;
-(void)invalidateDescription;
-(BOOL)localOnly;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAssetType:(id)arg1 filter:(id)arg2 localOnly:(BOOL)arg3 installedOnly:(BOOL)arg4 latestOnly:(BOOL)arg5 cachedOnly:(BOOL)arg6 ;
-(void)setInstalledOnly:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)installedOnly;
-(void)setLatestOnly:(BOOL)arg1 ;
-(id)assetType:(id)arg1 ;
-(BOOL)isEqualToAssetQuery:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAssetType:(id)arg1 filter:(id)arg2 ;
@end

