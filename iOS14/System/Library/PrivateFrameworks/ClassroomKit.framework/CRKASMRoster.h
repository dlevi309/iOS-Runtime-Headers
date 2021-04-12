/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSArray, NSSet;


@protocol CRKASMRoster <NSObject>
@property (nonatomic,readonly) id<CRKASMOrganization> organization; 
@property (nonatomic,readonly) id<CRKASMUser> user; 
@property (nonatomic,copy,readonly) NSArray * courses; 
@property (nonatomic,copy,readonly) NSSet * allTrustedUserCertificates; 
@required
-(id<CRKASMUser>)user;
-(NSArray *)courses;
-(id<CRKASMOrganization>)organization;
-(NSSet *)allTrustedUserCertificates;

@end

