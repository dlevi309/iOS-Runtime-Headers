/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKSerializableObject.h>

@class NSString, NSURL;

@interface EKSerializableParticipant : EKSerializableObject {

	NSString* _name;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	NSURL* _url;
	long long _participantRole;
	long long _participantStatus;
	long long _participantType;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                    //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long participantRole;                //@synthesize participantRole=_participantRole - In the implementation block
@property (assign,nonatomic) long long participantStatus;              //@synthesize participantStatus=_participantStatus - In the implementation block
@property (assign,nonatomic) long long participantType;                //@synthesize participantType=_participantType - In the implementation block
+(id)classesForKey;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)phoneNumber;
-(NSURL *)url;
-(long long)participantType;
-(NSString *)name;
-(long long)participantStatus;
-(void)setParticipantStatus:(long long)arg1 ;
-(id)initWithParticipant:(id)arg1 ;
-(id)createAttendee:(id*)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)participantRole;
-(void)setParticipantType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setParticipantRole:(long long)arg1 ;
@end

