/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYPeer;

@interface SYClock : PBCodable <NSCopying> {

	unsigned long long _version;
	SYPeer* _peer;

}

@property (nonatomic,retain) SYPeer * peer;                           //@synthesize peer=_peer - In the implementation block
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(void)initialize;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setPeer:(SYPeer *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)version;
-(unsigned long long)increment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SYPeer *)peer;
-(id)_myDescription;
-(unsigned long long)increaseBy:(unsigned long long)arg1 ;
@end

