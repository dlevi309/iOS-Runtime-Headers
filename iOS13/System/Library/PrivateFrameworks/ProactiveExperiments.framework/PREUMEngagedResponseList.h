/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PREUMTrialExperiment, NSMutableArray, PREUMMessageMetadata;

@interface PREUMEngagedResponseList : PBCodable <NSCopying> {

	unsigned long long _timeToTap;
	unsigned _engagedItem;
	PREUMTrialExperiment* _experiment;
	int _generationStatus;
	int _inputMethod;
	NSMutableArray* _items;
	PREUMMessageMetadata* _msgMetadata;
	SCD_Struct_PR1 _has;

}

@property (nonatomic,readonly) BOOL hasExperiment; 
@property (nonatomic,retain) PREUMTrialExperiment * experiment;               //@synthesize experiment=_experiment - In the implementation block
@property (nonatomic,readonly) BOOL hasMsgMetadata; 
@property (nonatomic,retain) PREUMMessageMetadata * msgMetadata;              //@synthesize msgMetadata=_msgMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                          //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedItem; 
@property (assign,nonatomic) unsigned engagedItem;                            //@synthesize engagedItem=_engagedItem - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToTap; 
@property (assign,nonatomic) unsigned long long timeToTap;                    //@synthesize timeToTap=_timeToTap - In the implementation block
@property (assign,nonatomic) BOOL hasInputMethod; 
@property (assign,nonatomic) int inputMethod;                                 //@synthesize inputMethod=_inputMethod - In the implementation block
@property (assign,nonatomic) BOOL hasGenerationStatus; 
@property (assign,nonatomic) int generationStatus;                            //@synthesize generationStatus=_generationStatus - In the implementation block
+(Class)itemsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(unsigned long long)itemsCount;
-(void)addItems:(id)arg1 ;
-(void)clearItems;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(int)inputMethod;
-(void)setInputMethod:(int)arg1 ;
-(PREUMTrialExperiment *)experiment;
-(void)setExperiment:(PREUMTrialExperiment *)arg1 ;
-(BOOL)hasExperiment;
-(BOOL)hasMsgMetadata;
-(void)setEngagedItem:(unsigned)arg1 ;
-(void)setHasEngagedItem:(BOOL)arg1 ;
-(BOOL)hasEngagedItem;
-(void)setTimeToTap:(unsigned long long)arg1 ;
-(void)setHasTimeToTap:(BOOL)arg1 ;
-(BOOL)hasTimeToTap;
-(void)setHasInputMethod:(BOOL)arg1 ;
-(BOOL)hasInputMethod;
-(id)inputMethodAsString:(int)arg1 ;
-(int)StringAsInputMethod:(id)arg1 ;
-(int)generationStatus;
-(void)setGenerationStatus:(int)arg1 ;
-(void)setHasGenerationStatus:(BOOL)arg1 ;
-(BOOL)hasGenerationStatus;
-(id)generationStatusAsString:(int)arg1 ;
-(int)StringAsGenerationStatus:(id)arg1 ;
-(PREUMMessageMetadata *)msgMetadata;
-(void)setMsgMetadata:(PREUMMessageMetadata *)arg1 ;
-(unsigned)engagedItem;
-(unsigned long long)timeToTap;
@end

