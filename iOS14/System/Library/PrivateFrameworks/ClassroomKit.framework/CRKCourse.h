/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DMFControlGroupIdentifier, NSString, CRKUser, NSDictionary, NSDate, NSSet;

@interface CRKCourse : NSObject <NSCopying, NSSecureCoding> {

	BOOL _requestingUnenroll;
	BOOL _studentCredentialsAreValid;
	BOOL _mustRequestUnenroll;
	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _courseName;
	NSString* _courseDescription;
	unsigned long long _courseMascotType;
	unsigned long long _courseColorType;
	CRKUser* _courseUser;
	NSDictionary* _instructorsByIdentifier;
	unsigned long long _type;
	NSDate* _automaticRemovalDate;
	NSSet* _trustedCertificatePersistentIds;
	NSSet* _validTrustedCertificatePersistentIds;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;                     //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * courseName;                                              //@synthesize courseName=_courseName - In the implementation block
@property (nonatomic,copy) NSString * courseDescription;                                       //@synthesize courseDescription=_courseDescription - In the implementation block
@property (assign,nonatomic) unsigned long long courseMascotType;                              //@synthesize courseMascotType=_courseMascotType - In the implementation block
@property (assign,nonatomic) unsigned long long courseColorType;                               //@synthesize courseColorType=_courseColorType - In the implementation block
@property (nonatomic,retain) CRKUser * courseUser;                                             //@synthesize courseUser=_courseUser - In the implementation block
@property (nonatomic,copy) NSDictionary * instructorsByIdentifier;                             //@synthesize instructorsByIdentifier=_instructorsByIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL mustRequestUnenroll;                                         //@synthesize mustRequestUnenroll=_mustRequestUnenroll - In the implementation block
@property (assign,getter=isRequestingUnenroll,nonatomic) BOOL requestingUnenroll;              //@synthesize requestingUnenroll=_requestingUnenroll - In the implementation block
@property (nonatomic,retain) NSDate * automaticRemovalDate;                                    //@synthesize automaticRemovalDate=_automaticRemovalDate - In the implementation block
@property (assign,nonatomic) BOOL studentCredentialsAreValid;                                  //@synthesize studentCredentialsAreValid=_studentCredentialsAreValid - In the implementation block
@property (nonatomic,retain) NSSet * trustedCertificatePersistentIds;                          //@synthesize trustedCertificatePersistentIds=_trustedCertificatePersistentIds - In the implementation block
@property (nonatomic,retain) NSSet * validTrustedCertificatePersistentIds;                     //@synthesize validTrustedCertificatePersistentIds=_validTrustedCertificatePersistentIds - In the implementation block
@property (getter=isManaged,nonatomic,readonly) BOOL managed; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) BOOL allowsUnenroll; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)stringForType:(unsigned long long)arg1 ;
+(id)keyPathsForValuesAffectingExpired;
-(BOOL)isManaged;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(id)description;
-(BOOL)isExpired;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setManaged:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(unsigned long long)courseMascotType;
-(unsigned long long)courseColorType;
-(NSString *)courseName;
-(void)setCourseName:(NSString *)arg1 ;
-(NSString *)courseDescription;
-(void)setCourseDescription:(NSString *)arg1 ;
-(BOOL)studentCredentialsAreValid;
-(NSSet *)validTrustedCertificatePersistentIds;
-(CRKUser *)courseUser;
-(NSDictionary *)instructorsByIdentifier;
-(BOOL)isEqualToCourse:(id)arg1 ;
-(BOOL)mustRequestUnenroll;
-(BOOL)isRequestingUnenroll;
-(NSDate *)automaticRemovalDate;
-(NSSet *)trustedCertificatePersistentIds;
-(void)setCourseMascotType:(unsigned long long)arg1 ;
-(void)setCourseColorType:(unsigned long long)arg1 ;
-(void)setCourseUser:(CRKUser *)arg1 ;
-(void)setInstructorsByIdentifier:(NSDictionary *)arg1 ;
-(void)setMustRequestUnenroll:(BOOL)arg1 ;
-(void)setRequestingUnenroll:(BOOL)arg1 ;
-(void)setAutomaticRemovalDate:(NSDate *)arg1 ;
-(void)setStudentCredentialsAreValid:(BOOL)arg1 ;
-(void)setTrustedCertificatePersistentIds:(NSSet *)arg1 ;
-(void)setValidTrustedCertificatePersistentIds:(NSSet *)arg1 ;
-(id)initWithIdentifier:(id)arg1 managed:(BOOL)arg2 ;
-(BOOL)allowsUnenroll;
-(BOOL)isDeeplyEqual:(id)arg1 ;
@end
