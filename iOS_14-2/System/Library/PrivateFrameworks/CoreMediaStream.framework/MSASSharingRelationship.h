/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDate;

@interface MSASSharingRelationship : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isMine;
	int _state;
	NSString* _GUID;
	NSString* _albumGUID;
	NSString* _email;
	NSArray* _emails;
	NSArray* _phones;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _personID;
	NSDate* _subscriptionDate;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                    //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSArray * emails;                        //@synthesize emails=_emails - In the implementation block
@property (nonatomic,retain) NSArray * phones;                        //@synthesize phones=_phones - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSDate * subscriptionDate;               //@synthesize subscriptionDate=_subscriptionDate - In the implementation block
@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)fullName;
-(BOOL)isMine;
-(void)setLastName:(NSString *)arg1 ;
-(id)init;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
-(NSArray *)phones;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emails;
-(id)description;
-(NSString *)albumGUID;
-(void)setEmails:(NSArray *)arg1 ;
-(id)_fullName;
-(void)setGUID:(NSString *)arg1 ;
-(void)setState:(int)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personID;
-(int)state;
-(void)setIsMine:(BOOL)arg1 ;
-(void)setPersonID:(NSString *)arg1 ;
-(NSDate *)subscriptionDate;
-(NSString *)email;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)GUID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(void)setSubscriptionDate:(NSDate *)arg1 ;
-(BOOL)isEqualToSharingRelationship:(id)arg1 ;
@end

