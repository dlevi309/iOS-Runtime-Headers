/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {

	int _pid;
	unsigned _contextID;
	NSString* _clientID;
	NSString* _displayUUID;

}

@property (nonatomic,copy,readonly) NSString * clientID;                 //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int pid;                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayUUID;              //@synthesize displayUUID=_displayUUID - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                       //@synthesize contextID=_contextID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned)arg3 ;
+(id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned)arg4 ;
-(NSString *)clientID;
-(NSString *)displayUUID;
-(int)pid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)contextID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned)arg4 ;
-(id)conciseDescription;
-(BOOL)isEqualNotIncludingClientIDAndPid:(id)arg1 ;
-(id)propertiesOneLevelMoreGeneric;
-(void)setPid:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

