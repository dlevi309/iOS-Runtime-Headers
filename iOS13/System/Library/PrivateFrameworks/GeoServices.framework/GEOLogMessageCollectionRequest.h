/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(void)addLogMessage:(id)arg1 ;
-(unsigned long long)logMessagesCount;
-(void)clearLogMessages;
-(id)logMessageAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)logMessages;
-(void)setLogMessages:(NSMutableArray *)arg1 ;
@end

