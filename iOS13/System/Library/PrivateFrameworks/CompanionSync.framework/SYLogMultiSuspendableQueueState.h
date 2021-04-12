/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(BOOL)hasTarget;
-(void)setResumeCount:(int)arg1 ;
-(void)setHasResumeCount:(BOOL)arg1 ;
-(BOOL)hasResumeCount;
-(int)resumeCount;
@end

