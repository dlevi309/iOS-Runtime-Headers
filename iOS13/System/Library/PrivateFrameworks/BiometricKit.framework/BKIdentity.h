/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@class NSUUID, NSString, NSDate;

@interface BKIdentity : NSObject {

	unsigned _userID;
	NSUUID* _uuid;
	long long _type;
	NSString* _name;
	NSDate* _creationTime;

}

@property (nonatomic,retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned userID;                    //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * creationTime;              //@synthesize creationTime=_creationTime - In the implementation block
+(id)identity;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(unsigned)userID;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setUserID:(unsigned)arg1 ;
-(NSDate *)creationTime;
-(void)setCreationTime:(NSDate *)arg1 ;
-(id)initWithServerIdentity:(id)arg1 ;
-(id)serverIdentity;
@end

