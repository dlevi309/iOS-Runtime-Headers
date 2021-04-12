/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRIFactorProvidingPrivate.h>

@protocol TRIPaths;
@class NSMutableDictionary, NSString;

@interface TRIDefaultFactorProvider : NSObject <TRIFactorProvidingPrivate> {

	id<TRIPaths> _paths;
	NSMutableDictionary* _factorProviders;
	NSMutableDictionary* _containerIds;
	BOOL _asClientProcess;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)hasRegisteredNamespaceWithName:(id)arg1 ;
-(id)levelForFactor:(id)arg1 withNamespaceName:(id)arg2 ;
-(BOOL)hasTreatmentInAnyOfLayers:(unsigned long long)arg1 withNamespaceName:(id)arg2 ;
-(id)levelForFactor:(id)arg1 withNamespace:(unsigned)arg2 ;
-(void)setContainer:(id)arg1 forNamespaceName:(id)arg2 ;
-(void)invalidateFactorsWithNamespaceName:(id)arg1 ;
-(id)treatmentIdWithNamespaceName:(id)arg1 ;
-(id)initWithPaths:(id)arg1 ;
-(id)factorLevelsWithNamespaceName:(id)arg1 ;
-(unsigned)compatibilityVersionWithNamespaceName:(id)arg1 ;
-(id)_providerForNamespace:(id)arg1 ;
-(id)rolloutIdWithNamespaceName:(id)arg1 ;
-(id)factorLevelsWithNamespace:(unsigned)arg1 ;
@end

