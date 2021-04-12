/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSNumber, NSDate;

@interface PKFamilyMember : NSObject <NSSecureCoding> {

	BOOL _me;
	BOOL _parentalControlsEnabled;
	BOOL _askToBuyEnabled;
	BOOL _childAccount;
	BOOL _parent;
	BOOL _organizer;
	NSString* _appleID;
	NSSet* _appleIDAliases;
	NSNumber* _dsid;
	NSString* _altDSID;
	NSString* _firstName;
	NSString* _lastName;
	unsigned long long _age;
	NSDate* _dateOfBirth;
	long long _memberType;
	NSDate* _joinedDate;

}

@property (assign,getter=isMe,nonatomic) BOOL me;                                  //@synthesize me=_me - In the implementation block
@property (nonatomic,copy) NSString * appleID;                                     //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSSet * appleIDAliases;                                 //@synthesize appleIDAliases=_appleIDAliases - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                        //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                     //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * firstName;                                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                                    //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) unsigned long long age;                               //@synthesize age=_age - In the implementation block
@property (nonatomic,copy) NSDate * dateOfBirth;                                   //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (assign,nonatomic) long long memberType;                                 //@synthesize memberType=_memberType - In the implementation block
@property (nonatomic,copy) NSDate * joinedDate;                                    //@synthesize joinedDate=_joinedDate - In the implementation block
@property (assign,nonatomic) BOOL parentalControlsEnabled;                         //@synthesize parentalControlsEnabled=_parentalControlsEnabled - In the implementation block
@property (assign,nonatomic) BOOL askToBuyEnabled;                                 //@synthesize askToBuyEnabled=_askToBuyEnabled - In the implementation block
@property (assign,getter=isChildAccount,nonatomic) BOOL childAccount;              //@synthesize childAccount=_childAccount - In the implementation block
@property (assign,getter=isParent,nonatomic) BOOL parent;                          //@synthesize parent=_parent - In the implementation block
@property (assign,getter=isOrganizer,nonatomic) BOOL organizer;                    //@synthesize organizer=_organizer - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isMe;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setMe:(BOOL)arg1 ;
-(void)setOrganizer:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMemberType:(long long)arg1 ;
-(BOOL)isEqualToFamilyMember:(id)arg1 ;
-(id)initWithFAFamilyMember:(id)arg1 ;
-(BOOL)canSharePeerPaymentAccount;
-(void)setAppleIDAliases:(NSSet *)arg1 ;
-(void)setJoinedDate:(NSDate *)arg1 ;
-(BOOL)parentalControlsEnabled;
-(void)setParentalControlsEnabled:(BOOL)arg1 ;
-(BOOL)askToBuyEnabled;
-(void)setAskToBuyEnabled:(BOOL)arg1 ;
-(void)setChildAccount:(BOOL)arg1 ;
-(void)setParent:(BOOL)arg1 ;
-(NSDate *)dateOfBirth;
-(void)setDateOfBirth:(NSDate *)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setAge:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)memberType;
-(BOOL)isOrganizer;
-(NSSet *)appleIDAliases;
-(id)labelName;
-(BOOL)isChildAccount;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(unsigned long long)age;
-(BOOL)isParent;
-(NSDate *)joinedDate;
-(BOOL)isEqual:(id)arg1 ;
@end

