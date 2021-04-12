/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject {

	CRKIdentityConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) CRKIdentityConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(CRKIdentityConfiguration *)configuration;
-(id)subject;
-(const void*)CMSHashingAlgorithmForSecAlgorithm:(unsigned)arg1 ;
-(id)keyParameters;
-(id)certificateParametersWithCMSAlgorithm:(const void*)arg1 ;
-(void)safeRelease:(void*)arg1 ;
-(void)addClientAndServerAuthEKUsToParameters:(id)arg1 ;
-(SecIdentityRef)makeIdentityRefWithError:(id*)arg1 ;
@end

