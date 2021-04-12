/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRIFactorProvidingPrivate.h>

@class NSMutableDictionary, NSString;

@interface TRIDefaultFactorProvider : NSObject <TRIFactorProvidingPrivate> {

	NSMutableDictionary* _factorProviders;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)treatmentIdWithNamespace:(unsigned)arg1 ;
-(id)levelForFactor:(id)arg1 withNamespace:(unsigned)arg2 ;
-(id)providerForNamespace:(unsigned)arg1 ;
-(void)invalidateFactorsWithNamespaceId:(unsigned)arg1 ;
@end

