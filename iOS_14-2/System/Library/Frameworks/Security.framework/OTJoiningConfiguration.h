/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface OTJoiningConfiguration : NSObject <NSSecureCoding> {

	BOOL _isInitiator;
	NSString* _protocolType;
	NSString* _uniqueDeviceID;
	NSString* _uniqueClientID;
	NSString* _containerName;
	NSString* _contextID;
	NSString* _pairingUUID;
	unsigned long long _epoch;
	long long _timeout;

}

@property (nonatomic,retain) NSString * protocolType;                //@synthesize protocolType=_protocolType - In the implementation block
@property (nonatomic,retain) NSString * uniqueDeviceID;              //@synthesize uniqueDeviceID=_uniqueDeviceID - In the implementation block
@property (nonatomic,retain) NSString * uniqueClientID;              //@synthesize uniqueClientID=_uniqueClientID - In the implementation block
@property (nonatomic,retain) NSString * containerName;               //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,retain) NSString * contextID;                   //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,retain) NSString * pairingUUID;                 //@synthesize pairingUUID=_pairingUUID - In the implementation block
@property (assign,nonatomic) unsigned long long epoch;               //@synthesize epoch=_epoch - In the implementation block
@property (assign,nonatomic) BOOL isInitiator;                       //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign) long long timeout;                                //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProtocolType:(id)arg1 uniqueDeviceID:(id)arg2 uniqueClientID:(id)arg3 pairingUUID:(id)arg4 containerName:(id)arg5 contextID:(id)arg6 epoch:(unsigned long long)arg7 isInitiator:(BOOL)arg8 ;
-(unsigned long long)epoch;
-(NSString *)protocolType;
-(void)setProtocolType:(NSString *)arg1 ;
-(NSString *)uniqueDeviceID;
-(void)setUniqueDeviceID:(NSString *)arg1 ;
-(NSString *)uniqueClientID;
-(void)setUniqueClientID:(NSString *)arg1 ;
-(NSString *)pairingUUID;
-(void)setPairingUUID:(NSString *)arg1 ;
-(void)setIsInitiator:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeout:(long long)arg1 ;
-(long long)timeout;
-(void)setContainerName:(NSString *)arg1 ;
-(void)setContextID:(NSString *)arg1 ;
-(NSString *)contextID;
-(BOOL)isInitiator;
-(NSString *)containerName;
-(id)initWithCoder:(id)arg1 ;
-(void)setEpoch:(unsigned long long)arg1 ;
@end

