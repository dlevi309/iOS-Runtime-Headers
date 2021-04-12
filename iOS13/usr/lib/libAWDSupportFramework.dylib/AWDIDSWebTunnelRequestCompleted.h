/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSWebTunnelRequestCompleted : PBCodable <NSCopying> {

	unsigned long long _requestSize;
	unsigned long long _timeTaken;
	unsigned long long _timestamp;
	int _deliveryType;
	NSString* _serviceIdentifier;
	int _tunnelError;
	BOOL _reversePushAttempted;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;                //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasTimeTaken; 
@property (assign,nonatomic) unsigned long long timeTaken;                //@synthesize timeTaken=_timeTaken - In the implementation block
@property (assign,nonatomic) BOOL hasDeliveryType; 
@property (assign,nonatomic) int deliveryType;                            //@synthesize deliveryType=_deliveryType - In the implementation block
@property (assign,nonatomic) BOOL hasTunnelError; 
@property (assign,nonatomic) int tunnelError;                             //@synthesize tunnelError=_tunnelError - In the implementation block
@property (assign,nonatomic) BOOL hasRequestSize; 
@property (assign,nonatomic) unsigned long long requestSize;              //@synthesize requestSize=_requestSize - In the implementation block
@property (assign,nonatomic) BOOL hasReversePushAttempted; 
@property (assign,nonatomic) BOOL reversePushAttempted;                   //@synthesize reversePushAttempted=_reversePushAttempted - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setDeliveryType:(int)arg1 ;
-(int)deliveryType;
-(BOOL)hasServiceIdentifier;
-(void)setRequestSize:(unsigned long long)arg1 ;
-(unsigned long long)requestSize;
-(void)setTimeTaken:(unsigned long long)arg1 ;
-(unsigned long long)timeTaken;
-(void)setHasTimeTaken:(BOOL)arg1 ;
-(BOOL)hasTimeTaken;
-(void)setHasDeliveryType:(BOOL)arg1 ;
-(BOOL)hasDeliveryType;
-(void)setTunnelError:(int)arg1 ;
-(void)setHasTunnelError:(BOOL)arg1 ;
-(BOOL)hasTunnelError;
-(void)setHasRequestSize:(BOOL)arg1 ;
-(BOOL)hasRequestSize;
-(void)setReversePushAttempted:(BOOL)arg1 ;
-(void)setHasReversePushAttempted:(BOOL)arg1 ;
-(BOOL)hasReversePushAttempted;
-(int)tunnelError;
-(BOOL)reversePushAttempted;
@end

