/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/

#import <MobileAsset/MADownloadOptions.h>

@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions {

	BOOL _supervised;
	BOOL _allowSameVersion;
	BOOL _prerequisiteReleaseTypeIsOverridden;
	NSString* _requestedProductVersion;
	long long _delayPeriod;
	NSString* _prerequisiteBuildVersion;
	NSString* _prerequisiteProductVersion;
	NSString* _prerequisiteReleaseType;
	NSString* _downloadAuthorizationHeader;

}

@property (nonatomic,retain) NSString * requestedProductVersion;                    //@synthesize requestedProductVersion=_requestedProductVersion - In the implementation block
@property (assign,nonatomic) long long delayPeriod;                                 //@synthesize delayPeriod=_delayPeriod - In the implementation block
@property (assign,nonatomic) BOOL supervised;                                       //@synthesize supervised=_supervised - In the implementation block
@property (assign,nonatomic) BOOL allowSameVersion;                                 //@synthesize allowSameVersion=_allowSameVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteBuildVersion;                   //@synthesize prerequisiteBuildVersion=_prerequisiteBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteProductVersion;                 //@synthesize prerequisiteProductVersion=_prerequisiteProductVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteReleaseType;                    //@synthesize prerequisiteReleaseType=_prerequisiteReleaseType - In the implementation block
@property (assign,nonatomic) BOOL prerequisiteReleaseTypeIsOverridden;              //@synthesize prerequisiteReleaseTypeIsOverridden=_prerequisiteReleaseTypeIsOverridden - In the implementation block
@property (nonatomic,retain) NSString * downloadAuthorizationHeader;                //@synthesize downloadAuthorizationHeader=_downloadAuthorizationHeader - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPrerequisiteBuildVersion:(NSString *)arg1 ;
-(id)init;
-(BOOL)prerequisiteReleaseTypeIsOverridden;
-(BOOL)allowSameVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)prerequisiteBuildVersion;
-(BOOL)supervised;
-(void)setAllowSameVersion:(BOOL)arg1 ;
-(id)description;
-(void)setPrerequisiteReleaseTypeIsOverridden:(BOOL)arg1 ;
-(NSString *)requestedProductVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)setSupervised:(BOOL)arg1 ;
-(void)setPrerequisiteReleaseType:(NSString *)arg1 ;
-(void)setDelayPeriod:(long long)arg1 ;
-(void)setDownloadAuthorizationHeader:(NSString *)arg1 ;
-(NSString *)prerequisiteReleaseType;
-(NSString *)prerequisiteProductVersion;
-(long long)delayPeriod;
-(NSString *)downloadAuthorizationHeader;
-(void)setPrerequisiteProductVersion:(NSString *)arg1 ;
-(void)dealloc;
-(void)setRequestedProductVersion:(NSString *)arg1 ;
@end

