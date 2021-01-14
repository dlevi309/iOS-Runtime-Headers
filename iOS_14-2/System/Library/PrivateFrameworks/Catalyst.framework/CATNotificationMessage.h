/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATMessage.h>

@class NSUUID, NSString, NSDictionary;

@interface CATNotificationMessage : CATMessage {

	NSUUID* _taskUUID;
	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSUUID * taskUUID;                    //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTaskUUID:(NSUUID *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSUUID *)taskUUID;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
@end

