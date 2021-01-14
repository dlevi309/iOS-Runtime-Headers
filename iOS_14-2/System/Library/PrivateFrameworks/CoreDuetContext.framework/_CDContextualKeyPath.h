/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUserCentric;
	BOOL _isEphemeral;
	BOOL _sensitiveContents;
	NSString* _key;
	NSString* _deviceID;

}

@property (nonatomic,copy) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                 //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL isUserCentric;                  //@synthesize isUserCentric=_isUserCentric - In the implementation block
@property (assign,nonatomic) BOOL isEphemeral;                    //@synthesize isEphemeral=_isEphemeral - In the implementation block
@property (assign,nonatomic) BOOL sensitiveContents;              //@synthesize sensitiveContents=_sensitiveContents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ephemeralKeyPathWithKey:(id)arg1 ;
+(id)keyPathWithKey:(id)arg1 isUserCentric:(BOOL)arg2 ;
+(id)remoteKeyPathForKeyPath:(id)arg1 forDeviceID:(id)arg2 ;
+(id)keyPathWithKey:(id)arg1 ;
+(id)remotekeyPathForKeyPath:(id)arg1 forDevice:(unsigned long long)arg2 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(id)initWithKey:(id)arg1 forDeviceID:(id)arg2 isUserCentric:(BOOL)arg3 isEphemeral:(BOOL)arg4 ;
-(NSString *)deviceID;
-(void)setIsUserCentric:(BOOL)arg1 ;
-(id)init;
-(id)initWithKey:(id)arg1 forDevice:(unsigned long long)arg2 isUserCentric:(BOOL)arg3 isEphemeral:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEphemeral;
-(BOOL)isUserCentric;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setIsEphemeral:(BOOL)arg1 ;
-(id)description;
-(BOOL)isMultiDeviceKeyPath;
-(NSString *)key;
-(unsigned long long)hash;
-(void)setSensitiveContents:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)sensitiveContents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

