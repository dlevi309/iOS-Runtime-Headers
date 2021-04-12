/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BFFSetupAssistantOnBoarding : PBCodable <NSCopying> {

	unsigned long long _durationPlaceholder;
	unsigned long long _durationVideo;
	unsigned long long _timestamp;
	unsigned _feature;
	SCD_Struct_BF3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFeature; 
@property (assign,nonatomic) unsigned feature;                                    //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) BOOL hasDurationPlaceholder; 
@property (assign,nonatomic) unsigned long long durationPlaceholder;              //@synthesize durationPlaceholder=_durationPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL hasDurationVideo; 
@property (assign,nonatomic) unsigned long long durationVideo;                    //@synthesize durationVideo=_durationVideo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)feature;
-(void)setFeature:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setDurationPlaceholder:(unsigned long long)arg1 ;
-(void)setDurationVideo:(unsigned long long)arg1 ;
-(void)setHasFeature:(BOOL)arg1 ;
-(BOOL)hasFeature;
-(void)setHasDurationPlaceholder:(BOOL)arg1 ;
-(BOOL)hasDurationPlaceholder;
-(void)setHasDurationVideo:(BOOL)arg1 ;
-(BOOL)hasDurationVideo;
-(unsigned long long)durationPlaceholder;
-(unsigned long long)durationVideo;
@end

