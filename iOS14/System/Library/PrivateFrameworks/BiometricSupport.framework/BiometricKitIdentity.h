/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSDate;

@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying> {

	unsigned _userID;
	int _type;
	int _attribute;
	int _entity;
	NSUUID* _uuid;
	NSString* _name;
	NSDate* _creationTime;
	long long _matchCount;
	long long _updateCount;

}

@property (nonatomic,retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned userID;                    //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int attribute;                      //@synthesize attribute=_attribute - In the implementation block
@property (assign,nonatomic) int entity;                         //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * creationTime;              //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) long long matchCount;               //@synthesize matchCount=_matchCount - In the implementation block
@property (assign,nonatomic) long long updateCount;              //@synthesize updateCount=_updateCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)biometricKitIdentity;
-(void)setUserID:(unsigned)arg1 ;
-(void)setEntity:(int)arg1 ;
-(int)entity;
-(NSUUID *)uuid;
-(unsigned)userID;
-(id)init;
-(void)setCreationTime:(NSDate *)arg1 ;
-(int)attribute;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)matchCount;
-(void)setType:(int)arg1 ;
-(NSString *)name;
-(void)setAttribute:(int)arg1 ;
-(id)description;
-(long long)updateCount;
-(void)setUpdateCount:(long long)arg1 ;
-(NSDate *)creationTime;
-(int)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToIdentity:(id)arg1 ;
-(void)setMatchCount:(long long)arg1 ;
@end

