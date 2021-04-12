/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(id)initWithCKUserIdentity:(id)arg1 ;
-(void)setSerializedNameComponents:(NSData *)arg1 ;
-(BOOL)hasSerializedNameComponents;
-(NSData *)serializedNameComponents;
-(id)nameComponentsAcceptUnknownUser:(BOOL)arg1 ;
@end

