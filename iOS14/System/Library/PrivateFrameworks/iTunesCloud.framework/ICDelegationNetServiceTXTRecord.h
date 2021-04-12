/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData;

@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying> {

	NSArray* _delegationAccountUUIDs;
	NSString* _deviceName;
	long long _securityMode;
	long long _serviceVersion;

}

@property (nonatomic,copy) NSArray * delegationAccountUUIDs;              //@synthesize delegationAccountUUIDs=_delegationAccountUUIDs - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) long long securityMode;                      //@synthesize securityMode=_securityMode - In the implementation block
@property (assign,nonatomic) long long serviceVersion;                    //@synthesize serviceVersion=_serviceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSData * TXTRecordData; 
-(NSString *)deviceName;
-(long long)serviceVersion;
-(NSData *)TXTRecordData;
-(void)setDelegationAccountUUIDs:(NSArray *)arg1 ;
-(void)setSecurityMode:(long long)arg1 ;
-(NSArray *)delegationAccountUUIDs;
-(id)description;
-(unsigned long long)hash;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setServiceVersion:(long long)arg1 ;
-(id)initWithTXTRecordData:(id)arg1 ;
-(long long)securityMode;
-(BOOL)isEqual:(id)arg1 ;
@end

