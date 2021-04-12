/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVia:(NSString *)arg1 ;
-(void)setRespondingInstance:(NSString *)arg1 ;
-(BOOL)hasVia;
-(BOOL)hasRespondingInstance;
-(NSString *)via;
-(NSString *)respondingInstance;
@end

