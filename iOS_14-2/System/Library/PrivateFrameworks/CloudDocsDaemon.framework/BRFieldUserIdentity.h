/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSPersonNameComponents;

@interface BRFieldUserIdentity : PBCodable <NSCopying> {

	NSData* _serializedNameComponents;

}

@property (nonatomic,retain) NSPersonNameComponents * nameComponents; 
@property (nonatomic,readonly) BOOL hasSerializedNameComponents; 
@property (nonatomic,retain) NSData * serializedNameComponents;                    //@synthesize serializedNameComponents=_serializedNameComponents - In the implementation block
+(id)unknownPersonNameComponents;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCKUserIdentity:(id)arg1 ;
-(void)setSerializedNameComponents:(NSData *)arg1 ;
-(BOOL)hasSerializedNameComponents;
-(NSData *)serializedNameComponents;
-(id)nameComponentsAcceptUnknownUser:(BOOL)arg1 ;
@end

