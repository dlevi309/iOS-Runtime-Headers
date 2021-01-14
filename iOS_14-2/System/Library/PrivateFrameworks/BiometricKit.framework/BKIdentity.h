/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@class NSUUID, NSString, NSDate, BKDevice;

@interface BKIdentity : NSObject {

	unsigned _userID;
	NSUUID* _uuid;
	long long _type;
	NSString* _name;
	NSDate* _creationTime;
	BKDevice* _device;

}

@property (nonatomic,retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned userID;                    //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * creationTime;              //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,retain) BKDevice * device;                  //@synthesize device=_device - In the implementation block
+(id)identity;
-(void)setUserID:(unsigned)arg1 ;
-(NSUUID *)uuid;
-(unsigned)userID;
-(void)setCreationTime:(NSDate *)arg1 ;
-(void)setType:(long long)arg1 ;
-(BKDevice *)device;
-(NSString *)name;
-(NSDate *)creationTime;
-(long long)type;
-(unsigned long long)hash;
-(void)setDevice:(BKDevice *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToIdentity:(id)arg1 ;
-(id)initWithServerIdentity:(id)arg1 device:(id)arg2 ;
-(id)serverIdentity;
@end

