/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSData *)TXTRecordData;
-(void)setSecurityMode:(long long)arg1 ;
-(long long)serviceVersion;
-(void)setServiceVersion:(long long)arg1 ;
-(long long)securityMode;
-(void)setDelegationAccountUUIDs:(NSArray *)arg1 ;
-(NSArray *)delegationAccountUUIDs;
-(id)initWithTXTRecordData:(id)arg1 ;
@end

