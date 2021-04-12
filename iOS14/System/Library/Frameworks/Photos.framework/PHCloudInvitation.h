/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSString, NSDate, NSNumber, NSArray;

@interface PHCloudInvitation : PHObject {

	BOOL _isMine;
	int _invitationState;
	int _invitationStateLocal;
	NSString* _inviteeFirstName;
	NSString* _inviteeLastName;
	NSString* _inviteeFullName;
	NSDate* _inviteeSubscriptionDate;
	NSString* _albumGUID;
	NSString* _cloudGUID;
	NSNumber* _inviteeEmailKey;
	NSString* _inviteeHashedPersonID;

}

@property (nonatomic,readonly) NSString * albumGUID;                               //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,readonly) NSString * cloudGUID;                               //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,readonly) int invitationStateLocal;                           //@synthesize invitationStateLocal=_invitationStateLocal - In the implementation block
@property (nonatomic,readonly) NSNumber * inviteeEmailKey;                         //@synthesize inviteeEmailKey=_inviteeEmailKey - In the implementation block
@property (nonatomic,readonly) NSString * inviteeHashedPersonID;                   //@synthesize inviteeHashedPersonID=_inviteeHashedPersonID - In the implementation block
@property (nonatomic,readonly) int invitationState;                                //@synthesize invitationState=_invitationState - In the implementation block
@property (nonatomic,readonly) NSString * inviteeFirstName;                        //@synthesize inviteeFirstName=_inviteeFirstName - In the implementation block
@property (nonatomic,readonly) NSString * inviteeLastName;                         //@synthesize inviteeLastName=_inviteeLastName - In the implementation block
@property (nonatomic,readonly) NSString * inviteeFullName;                         //@synthesize inviteeFullName=_inviteeFullName - In the implementation block
@property (nonatomic,readonly) BOOL isMine;                                        //@synthesize isMine=_isMine - In the implementation block
@property (nonatomic,readonly) NSDate * inviteeSubscriptionDate;                   //@synthesize inviteeSubscriptionDate=_inviteeSubscriptionDate - In the implementation block
@property (nonatomic,readonly) NSArray * inviteeEmails; 
@property (nonatomic,readonly) NSArray * inviteePhones; 
@property (nonatomic,readonly) NSString * invitationStateDescription; 
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(id)personInfoManager;
-(BOOL)isMine;
-(NSString *)cloudGUID;
-(int)invitationState;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSString *)albumGUID;
-(NSArray *)inviteeEmails;
-(NSArray *)inviteePhones;
-(id)inviteeDisplayNameIncludingEmail:(BOOL)arg1 ;
-(NSString *)invitationStateDescription;
-(NSString *)inviteeFirstName;
-(NSString *)inviteeLastName;
-(NSString *)inviteeFullName;
-(NSDate *)inviteeSubscriptionDate;
-(int)invitationStateLocal;
-(NSNumber *)inviteeEmailKey;
-(NSString *)inviteeHashedPersonID;
@end

