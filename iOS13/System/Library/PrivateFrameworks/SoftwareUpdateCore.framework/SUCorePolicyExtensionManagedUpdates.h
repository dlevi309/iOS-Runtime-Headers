/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <libobjc.A.dylib/SUCorePolicyExtensionProtocol.h>

@class NSString;

@interface SUCorePolicyExtensionManagedUpdates : NSObject <SUCorePolicyExtensionProtocol> {

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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supervised;
-(id)summary;
-(void)setSupervised:(BOOL)arg1 ;
-(id)extensionName;
-(void)setRequestedPMV:(NSString *)arg1 ;
-(void)setMDMUseDelayPeriod:(BOOL)arg1 ;
-(NSString *)requestedPMV;
-(BOOL)MDMUseDelayPeriod;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1 ;
-(void)extendDocumentatitonMAAssetQuery:(id)arg1 ;
-(id)filterSoftwareUpdateAssetArray:(id)arg1 ;
-(id)filterDocumentationAssetArray:(id)arg1 ;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1 ;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1 ;
-(long long)delayPeriodSecs;
-(void)setDelayPeriodSecs:(long long)arg1 ;
@end

