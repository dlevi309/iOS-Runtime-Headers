/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying> {

	NSData* _continuationMarker;
	NSMutableArray* _zoneSummarys;

}

@property (nonatomic,retain) NSMutableArray * zoneSummarys;              //@synthesize zoneSummarys=_zoneSummarys - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                //@synthesize continuationMarker=_continuationMarker - In the implementation block
+(Class)zoneSummaryType;
-(id)dictionaryRepresentation;
-(BOOL)hasContinuationMarker;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)continuationMarker;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addZoneSummary:(id)arg1 ;
-(unsigned long long)zoneSummarysCount;
-(void)clearZoneSummarys;
-(id)zoneSummaryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)zoneSummarys;
-(void)setZoneSummarys:(NSMutableArray *)arg1 ;
@end

