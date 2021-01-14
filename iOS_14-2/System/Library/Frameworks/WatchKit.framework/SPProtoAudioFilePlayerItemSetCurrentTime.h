/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SPProtoAudioFilePlayerItemSetCurrentTime : PBCodable <NSCopying> {

	double _currentTime;
	NSString* _identifier;
	SCD_Struct_SP5 _has;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentTime; 
@property (assign,nonatomic) double currentTime;                 //@synthesize currentTime=_currentTime - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCurrentTime:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)currentTime;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasCurrentTime;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)sockPuppetMessage;
-(void)setHasCurrentTime:(BOOL)arg1 ;
@end

