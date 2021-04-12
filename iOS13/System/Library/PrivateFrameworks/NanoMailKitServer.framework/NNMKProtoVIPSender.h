/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSMutableArray *)emailAddresses;
-(BOOL)hasName;
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(BOOL)hasDisplayName;
-(void)clearEmailAddresses;
-(void)addEmailAddresses:(id)arg1 ;
-(unsigned long long)emailAddressesCount;
-(id)emailAddressesAtIndex:(unsigned long long)arg1 ;
-(id)vipSender;
@end

