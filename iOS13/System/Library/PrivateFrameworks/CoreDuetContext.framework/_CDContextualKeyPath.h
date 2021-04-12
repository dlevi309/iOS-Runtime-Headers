/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUserCentric;
	BOOL _isEphemeral;
	NSString* _key;
	NSString* _deviceID;

}

@property (nonatomic,copy) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL isUserCentric;               //@synthesize isUserCentric=_isUserCentric - In the implementation block
@property (assign,nonatomic) BOOL isEphemeral;                 //@synthesize isEphemeral=_isEphemeral - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ephemeralKeyPathWithKey:(id)arg1 ;
+(id)keyPathWithKey:(id)arg1 ;
+(id)keyPathWithKey:(id)arg1 isUserCentric:(BOOL)arg2 ;
+(id)remotekeyPathForKeyPath:(id)arg1 forDevice:(unsigned long long)arg2 ;
+(id)remoteKeyPathForKeyPath:(id)arg1 forDeviceID:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(BOOL)isEphemeral;
-(void)setIsEphemeral:(BOOL)arg1 ;
-(BOOL)isUserCentric;
-(id)initWithKey:(id)arg1 forDeviceID:(id)arg2 isUserCentric:(BOOL)arg3 isEphemeral:(BOOL)arg4 ;
-(id)initWithKey:(id)arg1 forDevice:(unsigned long long)arg2 isUserCentric:(BOOL)arg3 isEphemeral:(BOOL)arg4 ;
-(BOOL)isMultiDeviceKeyPath;
-(void)setIsUserCentric:(BOOL)arg1 ;
@end

