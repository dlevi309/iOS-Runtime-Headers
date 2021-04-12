/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/CRKASMConcreteUser.h>
#import <libobjc.A.dylib/CRKASMTrustedUser.h>

@protocol CRKASMCertificateCollection;
@class NSObject, NSString;

@interface CRKASMConcreteTrustedUser : CRKASMConcreteUser <CRKASMTrustedUser> {

	NSObject*<CRKASMCertificateCollection> _certificateCollection;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSObject*<CRKASMNameComponents> nameComponents; 
@property (nonatomic,readonly) NSObject*<CRKASMOrganization> organization; 
@property (nonatomic,readonly) NSObject*<CRKASMCertificateCollection> certificateCollection;              //@synthesize certificateCollection=_certificateCollection - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithPerson:(id)arg1 ;
-(NSObject*<CRKASMCertificateCollection>)certificateCollection;
@end

