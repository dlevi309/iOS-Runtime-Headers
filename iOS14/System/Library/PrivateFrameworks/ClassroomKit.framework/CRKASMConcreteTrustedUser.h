/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/CRKASMConcreteUser.h>
#import <libobjc.A.dylib/CRKASMTrustedUser.h>

@class NSSet, CRKASMCertificateVendor, NSString;

@interface CRKASMConcreteTrustedUser : CRKASMConcreteUser <CRKASMTrustedUser> {

	CRKASMCertificateVendor* _certificateVendor;

}

@property (nonatomic,readonly) CRKASMCertificateVendor * certificateVendor;              //@synthesize certificateVendor=_certificateVendor - In the implementation block
@property (nonatomic,copy,readonly) NSSet * certificates; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * appleID; 
@property (nonatomic,readonly) id<CRKASMNameComponents> nameComponents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)certificates;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(CRKASMCertificateVendor *)certificateVendor;
-(BOOL)isEqualToConcreteTrustedUser:(id)arg1 ;
-(id)initWithBackingPerson:(id)arg1 certificateVendor:(id)arg2 ;
@end

