/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMRoster.h>

@protocol CRKASMOrganization, CRKASMUser;
@class NSArray, NSSet, CRKASMCertificateVendor, NSString;

@interface CRKASMConcreteRoster : NSObject <CRKASMRoster> {

	id<CRKASMOrganization> _organization;
	id<CRKASMUser> _user;
	NSArray* _courses;
	CRKASMCertificateVendor* _certificateVendor;

}

@property (nonatomic,readonly) CRKASMCertificateVendor * certificateVendor;              //@synthesize certificateVendor=_certificateVendor - In the implementation block
@property (nonatomic,readonly) id<CRKASMOrganization> organization;                      //@synthesize organization=_organization - In the implementation block
@property (nonatomic,readonly) id<CRKASMUser> user;                                      //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSArray * courses;                                   //@synthesize courses=_courses - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allTrustedUserCertificates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<CRKASMUser>)user;
-(unsigned long long)hash;
-(NSArray *)courses;
-(id<CRKASMOrganization>)organization;
-(BOOL)isEqual:(id)arg1 ;
-(CRKASMCertificateVendor *)certificateVendor;
-(id)allTrustedUserIdentifiers;
-(NSSet *)allTrustedUserCertificates;
-(id)initWithOrganization:(id)arg1 user:(id)arg2 courses:(id)arg3 certificateVendor:(id)arg4 ;
@end

