/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLFaceAnalysis : PBCodable <NSCopying> {

	NSMutableArray* _faceInstances;
	BOOL _completed;
	SCD_Struct_CP4 _has;

}

@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSMutableArray * faceInstances;              //@synthesize faceInstances=_faceInstances - In the implementation block
+(Class)faceInstancesType;
-(id)dictionaryRepresentation;
-(BOOL)completed;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)setHasCompleted:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearFaceInstances;
-(void)addFaceInstances:(id)arg1 ;
-(unsigned long long)faceInstancesCount;
-(id)faceInstancesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)faceInstances;
-(void)setFaceInstances:(NSMutableArray *)arg1 ;
@end

