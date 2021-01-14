/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ANParticipant : NSObject <ANMessage, NSSecureCoding> {

	BOOL _isAccessory;
	NSString* _name;
	NSString* _rapportID;
	NSString* _idsID;
	NSString* _homeKitID;
	NSString* _userID;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * rapportID;                  //@synthesize rapportID=_rapportID - In the implementation block
@property (nonatomic,retain) NSString * idsID;                      //@synthesize idsID=_idsID - In the implementation block
@property (nonatomic,retain) NSString * homeKitID;                  //@synthesize homeKitID=_homeKitID - In the implementation block
@property (assign,nonatomic) BOOL isAccessory;                      //@synthesize isAccessory=_isAccessory - In the implementation block
@property (nonatomic,retain) NSString * userID;                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) NSDictionary * info; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)participantsFromUsersInHome:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(id)message;
-(NSString *)userID;
-(NSDictionary *)info;
-(NSString *)rapportID;
-(id)initWithSender:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRapportID:(NSString *)arg1 ;
-(NSString *)idsID;
-(void)setIsAccessory:(BOOL)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(id)initWithMessage:(id)arg1 ;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)clearIdentifiers;
-(BOOL)isAccessory;
-(id)initWithAccessory:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)homeKitID;
-(void)setIdsID:(NSString *)arg1 ;
-(void)setHomeKitID:(NSString *)arg1 ;
-(void)populateWithAccessory:(id)arg1 ;
-(void)populateWithUser:(id)arg1 ;
-(void)populateWithDevice:(id)arg1 ;
@end

