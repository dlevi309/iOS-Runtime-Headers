/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLFaceAnalysis : PBCodable <NSCopying> {

	NSMutableArray* _faceInstances;
	BOOL _completed;
	SCD_Struct_CP2 _has;

}

@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSMutableArray * faceInstances;              //@synthesize faceInstances=_faceInstances - In the implementation block
+(Class)faceInstancesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)clearFaceInstances;
-(void)addFaceInstances:(id)arg1 ;
-(unsigned long long)faceInstancesCount;
-(id)faceInstancesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)faceInstances;
-(void)setFaceInstances:(NSMutableArray *)arg1 ;
@end

