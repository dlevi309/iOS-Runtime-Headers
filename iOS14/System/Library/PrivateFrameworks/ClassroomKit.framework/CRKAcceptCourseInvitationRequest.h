/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSString, NSDictionary;

@interface CRKAcceptCourseInvitationRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _pin;
	NSDictionary* _studentInformation;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pin;                                              //@synthesize pin=_pin - In the implementation block
@property (nonatomic,copy) NSDictionary * studentInformation;                           //@synthesize studentInformation=_studentInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)pin;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPin:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSDictionary *)studentInformation;
-(void)setStudentInformation:(NSDictionary *)arg1 ;
@end

