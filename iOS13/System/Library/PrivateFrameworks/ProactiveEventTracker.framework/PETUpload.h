/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, PETMetadata;

@interface PETUpload : PBCodable <NSCopying> {

	NSMutableArray* _aggregatedMessages;
	PETMetadata* _metadata;
	NSMutableArray* _trialMessages;
	NSMutableArray* _unaggregatedMessages;

}

@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) PETMetadata * metadata;                             //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * aggregatedMessages;                //@synthesize aggregatedMessages=_aggregatedMessages - In the implementation block
@property (nonatomic,retain) NSMutableArray * unaggregatedMessages;              //@synthesize unaggregatedMessages=_unaggregatedMessages - In the implementation block
@property (nonatomic,retain) NSMutableArray * trialMessages;                     //@synthesize trialMessages=_trialMessages - In the implementation block
+(Class)aggregatedMessagesType;
+(Class)unaggregatedMessagesType;
+(Class)trialMessagesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(PETMetadata *)arg1 ;
-(PETMetadata *)metadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMetadata;
-(void)clearAggregatedMessages;
-(void)addAggregatedMessages:(id)arg1 ;
-(unsigned long long)aggregatedMessagesCount;
-(id)aggregatedMessagesAtIndex:(unsigned long long)arg1 ;
-(void)clearUnaggregatedMessages;
-(void)addUnaggregatedMessages:(id)arg1 ;
-(unsigned long long)unaggregatedMessagesCount;
-(id)unaggregatedMessagesAtIndex:(unsigned long long)arg1 ;
-(void)clearTrialMessages;
-(void)addTrialMessages:(id)arg1 ;
-(unsigned long long)trialMessagesCount;
-(id)trialMessagesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)aggregatedMessages;
-(void)setAggregatedMessages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unaggregatedMessages;
-(void)setUnaggregatedMessages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)trialMessages;
-(void)setTrialMessages:(NSMutableArray *)arg1 ;
@end

