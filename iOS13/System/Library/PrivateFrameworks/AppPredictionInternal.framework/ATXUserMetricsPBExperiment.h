/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXUserMetricsPBExperiment : PBCodable <NSCopying> {

	NSString* _abGroup;
	NSString* _experimentName;

}

@property (nonatomic,readonly) BOOL hasExperimentName; 
@property (nonatomic,retain) NSString * experimentName;              //@synthesize experimentName=_experimentName - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;                     //@synthesize abGroup=_abGroup - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)experimentName;
-(void)setExperimentName:(NSString *)arg1 ;
-(BOOL)hasExperimentName;
-(NSString *)abGroup;
-(BOOL)hasAbGroup;
-(void)setAbGroup:(NSString *)arg1 ;
@end

