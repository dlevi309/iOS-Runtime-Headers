/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject {

	CRKIdentityConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) CRKIdentityConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)subject;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(CRKIdentityConfiguration *)configuration;
-(const void*)CMSHashingAlgorithmForSecAlgorithm:(unsigned)arg1 ;
-(id)keyParameters;
-(id)certificateParametersWithCMSAlgorithm:(const void*)arg1 ;
-(void)safeRelease:(void*)arg1 ;
-(void)addClientAndServerAuthEKUsToParameters:(id)arg1 ;
-(SecIdentityRef)makeIdentityRefWithError:(id*)arg1 ;
@end

