/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <SoftwareUpdateCore/SUCorePolicyExtension.h>
#import <libobjc.A.dylib/SUCorePolicyExtensionProtocol.h>

@class NSString;

@interface SUCorePolicyExtensionManagedUpdates : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {

	BOOL _supervised;
	BOOL _MDMUseDelayPeriod;
	NSString* _requestedPMV;
	long long _delayPeriodSecs;

}

@property (assign,nonatomic) BOOL supervised;                        //@synthesize supervised=_supervised - In the implementation block
@property (nonatomic,retain) NSString * requestedPMV;                //@synthesize requestedPMV=_requestedPMV - In the implementation block
@property (assign,nonatomic) BOOL MDMUseDelayPeriod;                 //@synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod - In the implementation block
@property (assign,nonatomic) long long delayPeriodSecs;              //@synthesize delayPeriodSecs=_delayPeriodSecs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)extensionName;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)supervised;
-(id)description;
-(id)summary;
-(id)initWithCoder:(id)arg1 ;
-(void)setSupervised:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1 ;
-(void)extendDocumentationMAAssetQuery:(id)arg1 ;
-(id)filterSoftwareUpdateAssetArray:(id)arg1 ;
-(id)filterDocumentationAssetArray:(id)arg1 ;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2 ;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1 ;
-(void)extendMSUApplyOptions:(id)arg1 ;
-(BOOL)isSupervisedPolicy;
-(void)_extendMAAssetQuery:(id)arg1 ;
-(NSString *)requestedPMV;
-(id)_filterAssetArray:(id)arg1 ;
-(BOOL)MDMUseDelayPeriod;
-(long long)delayPeriodSecs;
-(void)setRequestedPMV:(NSString *)arg1 ;
-(void)setMDMUseDelayPeriod:(BOOL)arg1 ;
-(void)setDelayPeriodSecs:(long long)arg1 ;
@end

