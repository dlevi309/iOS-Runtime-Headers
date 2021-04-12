/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


@protocol SUCorePolicyExtensionProtocol <NSSecureCoding>
@optional
-(void)extendMSUApplyOptions:(id)arg1;
-(BOOL)isSupervisedPolicy;

@required
-(id)extensionName;
-(id)summary;
-(id)copyWithZone:(NSZone*)arg1;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1;
-(void)extendDocumentationMAAssetQuery:(id)arg1;
-(id)filterSoftwareUpdateAssetArray:(id)arg1;
-(id)filterDocumentationAssetArray:(id)arg1;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1;

@end

