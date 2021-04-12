/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(id)sockPuppetMessage;
-(void)setHasCurrentTime:(BOOL)arg1 ;
-(BOOL)hasCurrentTime;
@end

