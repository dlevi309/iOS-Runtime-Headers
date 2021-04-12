/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _CDDevice : NSObject <NSCopying, NSSecureCoding> {

	BOOL _companion;
	NSString* _deviceID;
	unsigned long long _identifier;
	NSString* _name;
	long long _deviceClass;
	NSString* _model;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                              //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) long long deviceClass;                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (getter=isCompanion,nonatomic,readonly) BOOL companion;              //@synthesize companion=_companion - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localDevice;
+(unsigned long long)identifierForDeviceID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)identifier;
-(NSString *)model;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(BOOL)isCompanion;
-(long long)deviceClass;
-(void)setDeviceClass:(long long)arg1 ;
-(id)initWithName:(id)arg1 deviceID:(id)arg2 deviceClass:(long long)arg3 model:(id)arg4 companion:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 identifier:(unsigned long long)arg2 deviceClass:(long long)arg3 ;
-(id)initWithName:(id)arg1 deviceID:(id)arg2 model:(id)arg3 companion:(BOOL)arg4 ;
-(BOOL)matchesDeviceTypes:(unsigned long long)arg1 ;
@end

