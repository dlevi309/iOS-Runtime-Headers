/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SYLogMultiSuspendableQueueState : PBCodable <NSCopying> {

	NSString* _label;
	int _resumeCount;
	NSString* _target;
	SCD_Struct_SY5 _has;

}

@property (assign,nonatomic) BOOL hasResumeCount; 
@property (assign,nonatomic) int resumeCount;                  //@synthesize resumeCount=_resumeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasTarget; 
@property (nonatomic,retain) NSString * target;                //@synthesize target=_target - In the implementation block
-(id)dictionaryRepresentation;
-(void)setTarget:(NSString *)arg1 ;
-(BOOL)hasLabel;
-(BOOL)hasTarget;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasResumeCount:(BOOL)arg1 ;
-(int)resumeCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)target;
-(void)setLabel:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResumeCount;
-(void)setResumeCount:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

