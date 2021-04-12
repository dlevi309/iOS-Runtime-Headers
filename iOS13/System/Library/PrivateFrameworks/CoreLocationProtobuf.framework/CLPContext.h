/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPContext : PBCodable <NSCopying> {

	NSString* _bundleCategory;
	int _type;
	int _workoutType;
	BOOL _isDriving;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasIsDriving; 
@property (assign,nonatomic) BOOL isDriving;                         //@synthesize isDriving=_isDriving - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutType; 
@property (assign,nonatomic) int workoutType;                        //@synthesize workoutType=_workoutType - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleCategory; 
@property (nonatomic,retain) NSString * bundleCategory;              //@synthesize bundleCategory=_bundleCategory - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)isDriving;
-(void)setWorkoutType:(int)arg1 ;
-(int)workoutType;
-(void)setBundleCategory:(NSString *)arg1 ;
-(void)setIsDriving:(BOOL)arg1 ;
-(void)setHasIsDriving:(BOOL)arg1 ;
-(BOOL)hasIsDriving;
-(void)setHasWorkoutType:(BOOL)arg1 ;
-(BOOL)hasWorkoutType;
-(BOOL)hasBundleCategory;
-(NSString *)bundleCategory;
@end

