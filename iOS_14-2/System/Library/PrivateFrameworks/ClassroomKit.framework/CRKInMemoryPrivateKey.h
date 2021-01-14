/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKPrivateKey.h>

@class CRKIdentityConfiguration, NSData, NSString;

@interface CRKInMemoryPrivateKey : NSObject <CRKPrivateKey> {

	CRKIdentityConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) CRKIdentityConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) SecKeyRef underlyingPrivateKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)dataRepresentation;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(CRKIdentityConfiguration *)configuration;
-(SecKeyRef)underlyingPrivateKey;
@end

