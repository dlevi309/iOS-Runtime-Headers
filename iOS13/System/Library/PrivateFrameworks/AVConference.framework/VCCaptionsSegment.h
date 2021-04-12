/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VCCaptionsSegment : PBCodable <NSCopying> {

	unsigned _confidence;
	NSString* _text;
	BOOL _hasSpaceAfter;
	SCD_Struct_VC30 _has;

}

@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) unsigned confidence;                //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasHasSpaceAfter; 
@property (assign,nonatomic) BOOL hasSpaceAfter;                 //@synthesize hasSpaceAfter=_hasSpaceAfter - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) NSString * text;                    //@synthesize text=_text - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)confidence;
-(void)writeTo:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(unsigned)arg1 ;
-(BOOL)hasText;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)hasSpaceAfter;
-(void)setHasSpaceAfter:(BOOL)arg1 ;
-(void)setHasHasSpaceAfter:(BOOL)arg1 ;
-(BOOL)hasHasSpaceAfter;
@end

