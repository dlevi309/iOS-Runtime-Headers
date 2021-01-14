/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BMPBAppLaunchEvent : PBCodable <NSCopying> {

	double _absoluteTimestamp;
	double _duration;
	NSString* _bundleID;
	NSString* _launchReason;
	int _launchType;
	BOOL _string;
	SCD_Struct_BM5 _has;

}

@property (nonatomic,readonly) BOOL hasLaunchReason; 
@property (nonatomic,retain) NSString * launchReason;                //@synthesize launchReason=_launchReason - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchType; 
@property (assign,nonatomic) int launchType;                         //@synthesize launchType=_launchType - In the implementation block
@property (assign,nonatomic) BOOL hasString; 
@property (assign,nonatomic) BOOL string;                            //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL hasAbsoluteTimestamp; 
@property (assign,nonatomic) double absoluteTimestamp;               //@synthesize absoluteTimestamp=_absoluteTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasBundleID;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setLaunchReason:(NSString *)arg1 ;
-(BOOL)hasString;
-(void)mergeFrom:(id)arg1 ;
-(int)launchType;
-(id)description;
-(double)absoluteTimestamp;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(BOOL)string;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAbsoluteTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setString:(BOOL)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)launchReason;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLaunchType:(int)arg1 ;
-(void)setHasAbsoluteTimestamp:(BOOL)arg1 ;
-(BOOL)hasAbsoluteTimestamp;
-(BOOL)hasLaunchReason;
-(void)setHasLaunchType:(BOOL)arg1 ;
-(BOOL)hasLaunchType;
-(id)launchTypeAsString:(int)arg1 ;
-(int)StringAsLaunchType:(id)arg1 ;
-(void)setHasString:(BOOL)arg1 ;
@end

