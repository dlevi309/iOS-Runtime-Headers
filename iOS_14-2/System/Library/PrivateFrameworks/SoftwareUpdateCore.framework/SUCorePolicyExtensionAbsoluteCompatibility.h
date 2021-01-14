/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <SoftwareUpdateCore/SUCorePolicyExtension.h>
#import <libobjc.A.dylib/SUCorePolicyExtensionProtocol.h>

@class NSNumber;

@interface SUCorePolicyExtensionAbsoluteCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {

	NSNumber* _compatibilityVersion;

}

@property (nonatomic,retain) NSNumber * compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)compatibilityVersion;
-(id)init;
-(id)extensionName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)summary;
-(id)initWithCoder:(id)arg1 ;
-(void)setCompatibilityVersion:(NSNumber *)arg1 ;
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
@end

