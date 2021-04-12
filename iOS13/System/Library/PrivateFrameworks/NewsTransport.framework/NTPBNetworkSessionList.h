/*
* Generated on Monday, March 1, 2021 at 2:32:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)networkEventsCount;
-(NSMutableArray *)networkEvents;
-(void)clearNetworkEvents;
-(void)addNetworkEvents:(id)arg1 ;
-(id)networkEventsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)networkSessions;
-(void)setNetworkSessions:(NSMutableArray *)arg1 ;
-(void)setNetworkEvents:(NSMutableArray *)arg1 ;
-(void)addNetworkSessions:(id)arg1 ;
-(void)clearNetworkSessions;
-(unsigned long long)networkSessionsCount;
-(id)networkSessionsAtIndex:(unsigned long long)arg1 ;
@end

