/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRINamespaceFactorProviding.h>

@class NSArray, NSString;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {

	NSArray* _directoryChain;
	NSArray* _providerChain;
	unsigned _namespaceId;

}

@property (readonly) unsigned namespaceId;                          //@synthesize namespaceId=_namespaceId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factorProviderWithNamespaceId:(unsigned)arg1 ;
+(id)factorProviderWithNamespaceId:(unsigned)arg1 directoryChain:(id)arg2 ;
-(id)treatmentId;
-(unsigned)namespaceId;
-(unsigned)namespaceVersion;
-(unsigned)namespaceCompatibilityVersion;
-(id)levelForFactor:(id)arg1 ;
-(id)initWithNamespaceId:(unsigned)arg1 directoryChain:(id)arg2 ;
-(void)resetProviderChain;
-(id)treatmentIdForFactor:(id)arg1 ;
@end

