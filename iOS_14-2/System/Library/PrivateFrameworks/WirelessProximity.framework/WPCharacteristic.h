/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface WPCharacteristic : NSObject <NSSecureCoding> {

	NSUUID* _uuid;
	unsigned long long _properties;
	unsigned long long _permissions;
	NSData* _data;
	long long _writeType;

}

@property (retain) NSUUID * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long properties;               //@synthesize properties=_properties - In the implementation block
@property (assign) unsigned long long permissions;              //@synthesize permissions=_permissions - In the implementation block
@property (retain) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (assign) long long writeType;                         //@synthesize writeType=_writeType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)properties;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPermissions:(unsigned long long)arg1 ;
-(unsigned long long)permissions;
-(long long)writeType;
-(void)setWriteType:(long long)arg1 ;
@end

