/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject <NSCopying> {

	BOOL _isEmail;
	BOOL _isPhone;
	EKParticipant* _participant;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _cachedDisplayName;

}

@property (assign,nonatomic,__weak) EKParticipant * participant;              //@synthesize participant=_participant - In the implementation block
@property (nonatomic,copy) NSString * firstName;                              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * cachedDisplayName;                      //@synthesize cachedDisplayName=_cachedDisplayName - In the implementation block
@property (assign,nonatomic) BOOL isEmail;                                    //@synthesize isEmail=_isEmail - In the implementation block
@property (assign,nonatomic) BOOL isPhone;                                    //@synthesize isPhone=_isPhone - In the implementation block
+(id)participantForSortingWithEKParticipant:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)displayName;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(EKParticipant *)participant;
-(BOOL)isPhone;
-(BOOL)isEmail;
-(void)setCachedDisplayName:(NSString *)arg1 ;
-(void)setIsEmail:(BOOL)arg1 ;
-(void)setIsPhone:(BOOL)arg1 ;
-(void)setParticipant:(EKParticipant *)arg1 ;
-(BOOL)participantIsOptional:(id)arg1 ;
-(long long)compareByEmailThenByContactName:(id)arg1 ;
-(long long)compareByContactNames:(id)arg1 ;
-(NSString *)cachedDisplayName;
@end

