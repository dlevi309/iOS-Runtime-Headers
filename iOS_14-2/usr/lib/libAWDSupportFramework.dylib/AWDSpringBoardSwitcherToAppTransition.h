/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSpringBoardSwitcherToAppTransition : PBCodable <NSCopying> {

	unsigned long long _absoluteDistanceInList;
	unsigned long long _timestamp;
	NSString* _switcherName;
	BOOL _isGoingToHomeScreen;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitcherName; 
@property (nonatomic,retain) NSString * switcherName;                                //@synthesize switcherName=_switcherName - In the implementation block
@property (assign,nonatomic) BOOL hasAbsoluteDistanceInList; 
@property (assign,nonatomic) unsigned long long absoluteDistanceInList;              //@synthesize absoluteDistanceInList=_absoluteDistanceInList - In the implementation block
@property (assign,nonatomic) BOOL hasIsGoingToHomeScreen; 
@property (assign,nonatomic) BOOL isGoingToHomeScreen;                               //@synthesize isGoingToHomeScreen=_isGoingToHomeScreen - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSwitcherName:(NSString *)arg1 ;
-(BOOL)hasSwitcherName;
-(void)setAbsoluteDistanceInList:(unsigned long long)arg1 ;
-(void)setHasAbsoluteDistanceInList:(BOOL)arg1 ;
-(BOOL)hasAbsoluteDistanceInList;
-(void)setIsGoingToHomeScreen:(BOOL)arg1 ;
-(void)setHasIsGoingToHomeScreen:(BOOL)arg1 ;
-(BOOL)hasIsGoingToHomeScreen;
-(NSString *)switcherName;
-(unsigned long long)absoluteDistanceInList;
-(BOOL)isGoingToHomeScreen;
@end

