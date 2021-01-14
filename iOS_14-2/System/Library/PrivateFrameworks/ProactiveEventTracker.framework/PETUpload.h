/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, PETMetadata;

@interface PETUpload : PBCodable <NSCopying> {

	NSMutableArray* _aggregatedMessages;
	NSData* _compressedData;
	NSData* _compressedMessages;
	PETMetadata* _metadata;
	NSMutableArray* _unaggregatedMessages;
	BOOL _isCompressed;
	SCD_Struct_PE5 _has;

}

@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) PETMetadata * metadata;                             //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * aggregatedMessages;                //@synthesize aggregatedMessages=_aggregatedMessages - In the implementation block
@property (nonatomic,retain) NSMutableArray * unaggregatedMessages;              //@synthesize unaggregatedMessages=_unaggregatedMessages - In the implementation block
@property (assign,nonatomic) BOOL hasIsCompressed; 
@property (assign,nonatomic) BOOL isCompressed;                                  //@synthesize isCompressed=_isCompressed - In the implementation block
@property (nonatomic,readonly) BOOL hasCompressedData; 
@property (nonatomic,retain) NSData * compressedData;                            //@synthesize compressedData=_compressedData - In the implementation block
@property (nonatomic,readonly) BOOL hasCompressedMessages; 
@property (nonatomic,retain) NSData * compressedMessages;                        //@synthesize compressedMessages=_compressedMessages - In the implementation block
+(Class)aggregatedMessagesType;
+(Class)unaggregatedMessagesType;
-(id)dictionaryRepresentation;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(void)setMetadata:(PETMetadata *)arg1 ;
-(id)description;
-(void)clearAggregatedMessages;
-(void)addAggregatedMessages:(id)arg1 ;
-(unsigned long long)aggregatedMessagesCount;
-(id)aggregatedMessagesAtIndex:(unsigned long long)arg1 ;
-(void)clearUnaggregatedMessages;
-(void)addUnaggregatedMessages:(id)arg1 ;
-(unsigned long long)unaggregatedMessagesCount;
-(id)unaggregatedMessagesAtIndex:(unsigned long long)arg1 ;
-(void)setIsCompressed:(BOOL)arg1 ;
-(void)setHasIsCompressed:(BOOL)arg1 ;
-(BOOL)hasIsCompressed;
-(BOOL)hasCompressedData;
-(BOOL)hasCompressedMessages;
-(NSMutableArray *)aggregatedMessages;
-(void)setAggregatedMessages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unaggregatedMessages;
-(void)setUnaggregatedMessages:(NSMutableArray *)arg1 ;
-(NSData *)compressedData;
-(void)setCompressedData:(NSData *)arg1 ;
-(NSData *)compressedMessages;
-(void)setCompressedMessages:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(PETMetadata *)metadata;
-(BOOL)isCompressed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

