/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NNMKProtoVIPSender : PBCodable <NSCopying> {

	NSString* _displayName;
	NSMutableArray* _emailAddresses;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(Class)emailAddressesType;
+(id)protoVIP:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(BOOL)hasName;
-(NSMutableArray *)emailAddresses;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)emailAddressesAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)emailAddressesCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)addEmailAddresses:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearEmailAddresses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(id)vipSender;
@end

