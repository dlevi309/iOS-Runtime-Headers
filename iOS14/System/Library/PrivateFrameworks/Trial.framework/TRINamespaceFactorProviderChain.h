/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRINamespaceFactorProviding.h>

@protocol TRINamespaceFactorProviding;
@class NSArray, NSString;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {

	NSArray* _directoryChain;
	NSArray* _providerChain;
	id<TRINamespaceFactorProviding> _installedProvider;
	id<TRINamespaceFactorProviding> _rolloutProvider;
	id<TRINamespaceFactorProviding> _experimentProvider;
	unsigned _namespaceId;
	NSString* _namespaceName;

}

@property (nonatomic,readonly) NSString * namespaceName;              //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) unsigned namespaceId;                  //@synthesize namespaceId=_namespaceId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factorProviderWithNamespaceName:(id)arg1 directoryChain:(id)arg2 ;
+(id)factorProviderWithPaths:(id)arg1 namespaceName:(id)arg2 ;
+(id)factorProviderWithNamespaceName:(id)arg1 directoryChain:(id)arg2 treatmentLayers:(id)arg3 ;
-(BOOL)isRegistered;
-(id)rolloutId;
-(id)levelForFactor:(id)arg1 ;
-(id)initWithNamespaceName:(id)arg1 directoryChain:(id)arg2 treatmentLayers:(id)arg3 ;
-(BOOL)hasAnyTreatmentInLayers:(unsigned long long)arg1 ;
-(id)treatmentId;
-(unsigned)namespaceId;
-(unsigned)namespaceCompatibilityVersion;
-(NSString *)namespaceName;
-(id)factorLevels;
-(id)treatmentIdForFactor:(id)arg1 ;
-(unsigned)namespaceVersion;
@end

