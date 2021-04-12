/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBNetworkEventGroup : PBCodable <NSCopying> {

	NSString* _respondingInstance;
	NSString* _via;

}

@property (nonatomic,readonly) BOOL hasVia; 
@property (nonatomic,retain) NSString * via;                             //@synthesize via=_via - In the implementation block
@property (nonatomic,readonly) BOOL hasRespondingInstance; 
@property (nonatomic,retain) NSString * respondingInstance;              //@synthesize respondingInstance=_respondingInstance - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)via;
-(BOOL)hasVia;
-(void)mergeFrom:(id)arg1 ;
-(void)setRespondingInstance:(NSString *)arg1 ;
-(BOOL)hasRespondingInstance;
-(NSString *)respondingInstance;
-(id)description;
-(void)setVia:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

