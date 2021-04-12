/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
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
-(void)setHasTimestamp:(BOOL)arg1 ;
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

