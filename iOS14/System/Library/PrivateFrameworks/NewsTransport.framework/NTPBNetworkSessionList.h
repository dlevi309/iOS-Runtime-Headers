/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBNetworkSessionList : PBCodable <FCKeyValueStoreCoding, NSCopying> {

	NSMutableArray* _networkEvents;
	NSMutableArray* _networkSessions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * networkSessions;              //@synthesize networkSessions=_networkSessions - In the implementation block
@property (nonatomic,retain) NSMutableArray * networkEvents;                //@synthesize networkEvents=_networkEvents - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(Class)networkSessionsType;
+(Class)networkEventsType;
-(void)writeToKeyValuePair:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)networkEventsCount;
-(void)setNetworkSessions:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setNetworkEvents:(NSMutableArray *)arg1 ;
-(NSString *)description;
-(id)networkEventsAtIndex:(unsigned long long)arg1 ;
-(void)addNetworkEvents:(id)arg1 ;
-(void)clearNetworkEvents;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)networkEvents;
-(void)addNetworkSessions:(id)arg1 ;
-(void)clearNetworkSessions;
-(unsigned long long)networkSessionsCount;
-(id)networkSessionsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSMutableArray *)networkSessions;
@end

