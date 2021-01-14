/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSMutableArray *)milestones;
-(void)addMilestones:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
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

