/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PBBProtoTransferPerformanceResults : PBCodable <NSCopying> {

	NSMutableArray* _macroActivites;
	NSMutableArray* _measures;
	NSMutableArray* _milestones;

}

@property (nonatomic,retain) NSMutableArray * milestones;                  //@synthesize milestones=_milestones - In the implementation block
@property (nonatomic,retain) NSMutableArray * measures;                    //@synthesize measures=_measures - In the implementation block
@property (nonatomic,retain) NSMutableArray * macroActivites;              //@synthesize macroActivites=_macroActivites - In the implementation block
+(Class)milestonesType;
+(Class)measuresType;
+(Class)macroActivitesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addMilestones:(id)arg1 ;
-(NSMutableArray *)milestones;
-(void)setMilestones:(NSMutableArray *)arg1 ;
-(void)setMacroActivites:(NSMutableArray *)arg1 ;
-(void)setMeasures:(NSMutableArray *)arg1 ;
-(void)addMeasures:(id)arg1 ;
-(void)addMacroActivites:(id)arg1 ;
-(unsigned long long)milestonesCount;
-(void)clearMilestones;
-(id)milestonesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)measuresCount;
-(void)clearMeasures;
-(id)measuresAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)macroActivitesCount;
-(void)clearMacroActivites;
-(id)macroActivitesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)measures;
-(NSMutableArray *)macroActivites;
@end

