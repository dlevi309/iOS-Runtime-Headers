/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, NSPredicate, EKCalendar;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (assign,nonatomic) unsigned long long shareeStatus; 
@property (assign,nonatomic) unsigned long long shareeAccessLevel; 
@property (nonatomic,readonly) NSPredicate * contactPredicate; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,readonly) EKCalendar * owner; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)knownIdentityKeysForComparison;
+(id)shareeWithName:(id)arg1 url:(id)arg2 ;
+(id)_urlForEmailAddress:(id)arg1 andPhoneNumber:(id)arg2 ;
+(unsigned long long)_ekShareeStatusFromCalShareeStatus:(int)arg1 ;
+(int)_calShareeStatusFromEKShareeStatus:(unsigned long long)arg1 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 ;
+(unsigned long long)_ekShareeAccessLevelFromCalShareeAccessLevel:(int)arg1 ;
+(int)_calShareeAccessLevelFromEKShareeAccessLevel:(unsigned long long)arg1 ;
+(unsigned long long)statusEnumFromString:(id)arg1 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 ;
+(id)shareeWithName:(id)arg1 phoneNumber:(id)arg2 ;
+(id)statusStringFromEnum:(unsigned long long)arg1 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 externalID:(id)arg4 ;
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)UUID;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(id)init;
-(void)setFirstName:(NSString *)arg1 ;
-(EKCalendar *)owner;
-(NSString *)emailAddress;
-(NSString *)externalID;
-(NSString *)phoneNumber;
-(id)initWithName:(id)arg1 url:(id)arg2 ;
-(id)initWithName:(id)arg1 url:(id)arg2 externalID:(id)arg3 ;
-(void)setShareeAccessLevel:(unsigned long long)arg1 ;
-(unsigned long long)shareeAccessLevel;
-(NSString *)name;
-(NSString *)description;
-(NSString *)address;
-(int)shareeStatusRaw;
-(void)setShareeStatusRaw:(int)arg1 ;
-(int)shareeAccessLevelRaw;
-(void)setShareeAccessLevelRaw:(int)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(unsigned long long)shareeStatus;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)URL;
-(void)setName:(NSString *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(NSPredicate *)contactPredicate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
@end

