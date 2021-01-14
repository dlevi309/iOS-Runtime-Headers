/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _logMessages;

}

@property (nonatomic,retain) NSMutableArray * logMessages; 
+(BOOL)isValid:(id)arg1 ;
+(Class)logMessageType;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)requestTypeCode;
-(void)setLogMessages:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearLogMessages;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)addLogMessage:(id)arg1 ;
-(unsigned long long)logMessagesCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)logMessages;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)logMessageAtIndex:(unsigned long long)arg1 ;
@end

