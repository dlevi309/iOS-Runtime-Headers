/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class DMFControlGroupIdentifier, NSString, NSDate, NSArray, NSSet;


@protocol CRKASMCourse
@property (nonatomic,copy,readonly) DMFControlGroupIdentifier * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long mascot; 
@property (nonatomic,readonly) unsigned long long color; 
@property (nonatomic,readonly) id<CRKASMLocation> location; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (nonatomic,readonly) id<CRKIdentity> identity; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSArray * users; 
@property (nonatomic,copy,readonly) NSArray * trustedUsers; 
@property (nonatomic,copy,readonly) NSSet * allTrustedUserCertificates; 
@required
-(BOOL)isEditable;
-(id<CRKIdentity>)identity;
-(unsigned long long)color;
-(id<CRKASMLocation>)location;
-(NSString *)name;
-(unsigned long long)mascot;
-(NSDate *)creationDate;
-(DMFControlGroupIdentifier *)identifier;
-(NSArray *)users;
-(NSArray *)trustedUsers;
-(NSSet *)allTrustedUserCertificates;

@end

