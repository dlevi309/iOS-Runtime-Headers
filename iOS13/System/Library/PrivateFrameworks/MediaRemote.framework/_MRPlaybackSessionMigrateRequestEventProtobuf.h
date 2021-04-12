/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSError;

@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable <NSCopying> {

	double _duration;
	double _endTimestamp;
	long long _errorCode;
	double _startTimestamp;
	NSString* _errorDescription;
	NSString* _name;
	SCD_Struct_MR15 _has;

}

@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) double startTimestamp;                    //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndTimestamp; 
@property (assign,nonatomic) double endTimestamp;                      //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSError *)error;
-(id)dictionaryRepresentation;
-(double)duration;
-(double)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setDuration:(double)arg1 ;
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
-(long long)errorCode;
-(double)endTimestamp;
-(BOOL)hasDuration;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(void)setEndTimestamp:(double)arg1 ;
-(BOOL)hasErrorDescription;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(void)setHasEndTimestamp:(BOOL)arg1 ;
-(BOOL)hasEndTimestamp;
@end

