/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)localDevice;
+(BOOL)supportsSecureCoding;
+(unsigned long long)identifierForDeviceID:(id)arg1 ;
-(BOOL)isCompanion;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(NSString *)model;
-(BOOL)matchesDeviceTypes:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 identifier:(unsigned long long)arg2 deviceClass:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)deviceClass;
-(id)initWithName:(id)arg1 deviceID:(id)arg2 deviceClass:(long long)arg3 model:(id)arg4 companion:(BOOL)arg5 ;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 deviceID:(id)arg2 model:(id)arg3 companion:(BOOL)arg4 ;
-(void)setDeviceClass:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

