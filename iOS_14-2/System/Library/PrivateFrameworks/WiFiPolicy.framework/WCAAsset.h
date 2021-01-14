/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ASAsset;

@interface WCAAsset : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _extension;
	unsigned long long _latestInstalledVersion;
	ASAsset* _latestInstalledAsset;
	unsigned long long _installedAssetVersion;
	unsigned long long _latestNotInstalledVersion;
	ASAsset* _latestNotInstalledAsset;

}

@property (assign) unsigned long long latestInstalledVersion;                 //@synthesize latestInstalledVersion=_latestInstalledVersion - In the implementation block
@property (nonatomic,retain) ASAsset * latestInstalledAsset;                  //@synthesize latestInstalledAsset=_latestInstalledAsset - In the implementation block
@property (assign) unsigned long long installedAssetVersion;                  //@synthesize installedAssetVersion=_installedAssetVersion - In the implementation block
@property (assign) unsigned long long latestNotInstalledVersion;              //@synthesize latestNotInstalledVersion=_latestNotInstalledVersion - In the implementation block
@property (nonatomic,retain) ASAsset * latestNotInstalledAsset;               //@synthesize latestNotInstalledAsset=_latestNotInstalledAsset - In the implementation block
@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * extension;                            //@synthesize extension=_extension - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)assetWithName:(id)arg1 andExtension:(id)arg2 ;
+(id)wifiBehaviorPlistAsset;
+(id)beaconsDataAsset;
-(void)setExtension:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)extension;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(ASAsset *)latestInstalledAsset;
-(id)localInstalledURL;
-(unsigned long long)latestInstalledVersion;
-(void)setLatestInstalledVersion:(unsigned long long)arg1 ;
-(void)setLatestInstalledAsset:(ASAsset *)arg1 ;
-(unsigned long long)installedAssetVersion;
-(void)setInstalledAssetVersion:(unsigned long long)arg1 ;
-(unsigned long long)latestNotInstalledVersion;
-(void)setLatestNotInstalledVersion:(unsigned long long)arg1 ;
-(ASAsset *)latestNotInstalledAsset;
-(void)setLatestNotInstalledAsset:(ASAsset *)arg1 ;
@end

