/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufAppleCashSharingRecipientCapabilities : PBCodable <NSCopying> {

	NSString* _altDSID;
	NSString* _deviceRegion;
	NSData* _fromDeviceVersion;
	NSString* _handle;
	unsigned _version;
	BOOL _supportsManatee;
	SCD_Struct_PK13 _has;

}

@property (assign,nonatomic) unsigned version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasHandle; 
@property (nonatomic,retain) NSString * handle;                        //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) BOOL hasAltDSID; 
@property (nonatomic,retain) NSString * altDSID;                       //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceRegion; 
@property (nonatomic,retain) NSString * deviceRegion;                  //@synthesize deviceRegion=_deviceRegion - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsManatee; 
@property (assign,nonatomic) BOOL supportsManatee;                     //@synthesize supportsManatee=_supportsManatee - In the implementation block
@property (nonatomic,readonly) BOOL hasFromDeviceVersion; 
@property (nonatomic,retain) NSData * fromDeviceVersion;               //@synthesize fromDeviceVersion=_fromDeviceVersion - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)deviceRegion;
-(BOOL)hasHandle;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDeviceRegion;
-(void)setHasSupportsManatee:(BOOL)arg1 ;
-(BOOL)hasSupportsManatee;
-(BOOL)hasFromDeviceVersion;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(NSData *)fromDeviceVersion;
-(void)copyTo:(id)arg1 ;
-(void)setFromDeviceVersion:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSupportsManatee:(BOOL)arg1 ;
-(BOOL)supportsManatee;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAltDSID;
@end

