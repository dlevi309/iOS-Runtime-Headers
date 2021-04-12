/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)userID;
-(void)setName:(NSString *)arg1 ;
-(int)attribute;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setUserID:(unsigned)arg1 ;
-(void)setEntity:(int)arg1 ;
-(int)entity;
-(NSDate *)creationTime;
-(void)setCreationTime:(NSDate *)arg1 ;
-(long long)updateCount;
-(void)setUpdateCount:(long long)arg1 ;
-(long long)matchCount;
-(void)setAttribute:(int)arg1 ;
-(void)setMatchCount:(long long)arg1 ;
@end

