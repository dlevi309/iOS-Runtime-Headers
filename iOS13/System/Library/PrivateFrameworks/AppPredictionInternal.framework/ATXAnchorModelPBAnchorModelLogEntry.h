/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXAnchorModelPBAnchorMetadata, NSMutableArray, NSString;

@interface ATXAnchorModelPBAnchorModelLogEntry : PBCodable <NSCopying> {

	ATXAnchorModelPBAnchorMetadata* _anchor;
	NSMutableArray* _negativeActions;
	NSMutableArray* _negativeAppLaunches;
	NSMutableArray* _positiveActions;
	NSMutableArray* _positiveAppLaunches;
	NSString* _userId;

}

@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasAnchor; 
@property (nonatomic,retain) ATXAnchorModelPBAnchorMetadata * anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSMutableArray * positiveAppLaunches;                 //@synthesize positiveAppLaunches=_positiveAppLaunches - In the implementation block
@property (nonatomic,retain) NSMutableArray * positiveActions;                     //@synthesize positiveActions=_positiveActions - In the implementation block
@property (nonatomic,retain) NSMutableArray * negativeAppLaunches;                 //@synthesize negativeAppLaunches=_negativeAppLaunches - In the implementation block
@property (nonatomic,retain) NSMutableArray * negativeActions;                     //@synthesize negativeActions=_negativeActions - In the implementation block
+(Class)positiveAppLaunchesType;
+(Class)positiveActionsType;
+(Class)negativeAppLaunchesType;
+(Class)negativeActionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(ATXAnchorModelPBAnchorMetadata *)anchor;
-(void)setAnchor:(ATXAnchorModelPBAnchorMetadata *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)hasUserId;
-(BOOL)hasAnchor;
-(void)clearPositiveAppLaunches;
-(void)addPositiveAppLaunches:(id)arg1 ;
-(unsigned long long)positiveAppLaunchesCount;
-(id)positiveAppLaunchesAtIndex:(unsigned long long)arg1 ;
-(void)clearPositiveActions;
-(void)addPositiveActions:(id)arg1 ;
-(unsigned long long)positiveActionsCount;
-(id)positiveActionsAtIndex:(unsigned long long)arg1 ;
-(void)clearNegativeAppLaunches;
-(void)addNegativeAppLaunches:(id)arg1 ;
-(unsigned long long)negativeAppLaunchesCount;
-(id)negativeAppLaunchesAtIndex:(unsigned long long)arg1 ;
-(void)clearNegativeActions;
-(void)addNegativeActions:(id)arg1 ;
-(unsigned long long)negativeActionsCount;
-(id)negativeActionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)positiveAppLaunches;
-(void)setPositiveAppLaunches:(NSMutableArray *)arg1 ;
-(NSMutableArray *)positiveActions;
-(void)setPositiveActions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)negativeAppLaunches;
-(void)setNegativeAppLaunches:(NSMutableArray *)arg1 ;
-(NSMutableArray *)negativeActions;
-(void)setNegativeActions:(NSMutableArray *)arg1 ;
@end

