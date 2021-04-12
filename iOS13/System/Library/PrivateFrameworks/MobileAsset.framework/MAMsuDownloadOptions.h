/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,retain) NSString * requestedProductVersion;                    //@synthesize requestedProductVersion=_requestedProductVersion - In the implementation block
@property (assign,nonatomic) long long delayPeriod;                                 //@synthesize delayPeriod=_delayPeriod - In the implementation block
@property (assign,nonatomic) BOOL supervised;                                       //@synthesize supervised=_supervised - In the implementation block
@property (assign,nonatomic) BOOL allowSameVersion;                                 //@synthesize allowSameVersion=_allowSameVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteBuildVersion;                   //@synthesize prerequisiteBuildVersion=_prerequisiteBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteProductVersion;                 //@synthesize prerequisiteProductVersion=_prerequisiteProductVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteReleaseType;                    //@synthesize prerequisiteReleaseType=_prerequisiteReleaseType - In the implementation block
@property (assign,nonatomic) BOOL prerequisiteReleaseTypeIsOverridden;              //@synthesize prerequisiteReleaseTypeIsOverridden=_prerequisiteReleaseTypeIsOverridden - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supervised;
-(void)logOptions;
-(void)setRequestedProductVersion:(NSString *)arg1 ;
-(void)setPrerequisiteBuildVersion:(NSString *)arg1 ;
-(void)setPrerequisiteProductVersion:(NSString *)arg1 ;
-(void)setPrerequisiteReleaseType:(NSString *)arg1 ;
-(NSString *)requestedProductVersion;
-(long long)delayPeriod;
-(BOOL)allowSameVersion;
-(void)setDelayPeriod:(long long)arg1 ;
-(void)setSupervised:(BOOL)arg1 ;
-(void)setAllowSameVersion:(BOOL)arg1 ;
-(NSString *)prerequisiteBuildVersion;
-(NSString *)prerequisiteProductVersion;
-(NSString *)prerequisiteReleaseType;
-(BOOL)prerequisiteReleaseTypeIsOverridden;
-(void)setPrerequisiteReleaseTypeIsOverridden:(BOOL)arg1 ;
@end

