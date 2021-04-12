/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRINamespaceFactorProviding.h>

@protocol TRIFactorLevelCaching;
@class NSString;

@interface TRINamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {

	NSString* _namespaceName;
	NSString* _treatmentId;
	unsigned _namespaceVersion;
	unsigned _namespaceCompatibilityVersion;
	id<TRIFactorLevelCaching> _factorLevels;

}

@property (nonatomic,readonly) NSString * namespaceName;                            //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) unsigned namespaceVersion; 
@property (nonatomic,readonly) unsigned namespaceCompatibilityVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factorProviderWithNamespaceId:(unsigned)arg1 directory:(id)arg2 ;
+(id)factorLevelsWithTreatmentData:(id)arg1 referencePath:(id)arg2 filteredByNamespaceName:(id)arg3 outTreatmentId:(id*)arg4 error:(id*)arg5 ;
+(id)pathForFactor:(id)arg1 directory:(id)arg2 ;
+(id)_assetFilenameForFactor:(id)arg1 ;
+(id)factorProviderWithNamespaceDescriptor:(id)arg1 asClientProcess:(BOOL)arg2 ;
+(id)factorProviderWithNamespaceName:(id)arg1 directory:(id)arg2 ;
-(id)rolloutId;
-(BOOL)overwriteItemAtPath:(id)arg1 withItemAtPath:(id)arg2 error:(id*)arg3 ;
-(id)levelForFactor:(id)arg1 ;
-(id)initWithNamespaceName:(id)arg1 namespaceVersion:(unsigned)arg2 namespaceCompatibilityVersion:(unsigned)arg3 factorLevels:(id)arg4 treatmentId:(id)arg5 ;
-(id)_copyAssetsToDirectory:(id)arg1 ;
-(id)treatmentId;
-(id)initWithNamespaceName:(id)arg1 treatmentData:(id)arg2 namespaceVersion:(unsigned)arg3 namespaceCompatibilityVersion:(unsigned)arg4 referencePath:(id)arg5 error:(id*)arg6 ;
-(id)overlayLevelsFromFactorProvider:(id)arg1 ;
-(unsigned)namespaceId;
-(BOOL)saveToPath:(id)arg1 copyAssets:(BOOL)arg2 ;
-(unsigned)namespaceCompatibilityVersion;
-(NSString *)namespaceName;
-(id)factorLevels;
-(unsigned)namespaceVersion;
@end

