/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRINamespaceFactorProviding.h>

@class NSString, NSMutableDictionary;

@interface TRINamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {

	NSString* _treatmentId;
	unsigned _namespaceVersion;
	unsigned _namespaceCompatibilityVersion;
	NSMutableDictionary* _factorLevels;
	unsigned _namespaceId;

}

@property (readonly) unsigned namespaceId;                                //@synthesize namespaceId=_namespaceId - In the implementation block
@property (readonly) unsigned namespaceVersion; 
@property (readonly) unsigned namespaceCompatibilityVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factorProviderWithNamespaceDescriptor:(id)arg1 ;
+(id)pathForFactor:(id)arg1 directory:(id)arg2 ;
+(id)factorProviderWithNamespaceId:(unsigned)arg1 directory:(id)arg2 ;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)treatment;
-(id)treatmentId;
-(unsigned)namespaceId;
-(unsigned)namespaceVersion;
-(unsigned)namespaceCompatibilityVersion;
-(id)initWithNamespaceId:(unsigned)arg1 treatment:(id)arg2 namespaceVersion:(unsigned)arg3 namespaceCompatibilityVersion:(unsigned)arg4 ;
-(void)initFactorLevelsWithTreatment:(id)arg1 ;
-(BOOL)copyAssetsToDirectory:(id)arg1 ;
-(id)levelForFactor:(id)arg1 ;
-(id)factorLevels;
-(void)setFactorLevels:(id)arg1 ;
-(BOOL)saveToPath:(id)arg1 copyAssets:(BOOL)arg2 ;
@end

