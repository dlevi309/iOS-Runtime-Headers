/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBDailyStatusEvent : PBCodable <NSCopying> {

	NSString* _key;
	BOOL _homeAutomationsEnabled;
	BOOL _installed;
	BOOL _personalAutomationsEnabled;
	BOOL _sharingEnabled;
	SCD_Struct_WF20 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasInstalled; 
@property (assign,nonatomic) BOOL installed;                                  //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL hasSharingEnabled; 
@property (assign,nonatomic) BOOL sharingEnabled;                             //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalAutomationsEnabled; 
@property (assign,nonatomic) BOOL personalAutomationsEnabled;                 //@synthesize personalAutomationsEnabled=_personalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasHomeAutomationsEnabled; 
@property (assign,nonatomic) BOOL homeAutomationsEnabled;                     //@synthesize homeAutomationsEnabled=_homeAutomationsEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(BOOL)installed;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setHomeAutomationsEnabled:(BOOL)arg1 ;
-(void)setPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)personalAutomationsEnabled;
-(BOOL)homeAutomationsEnabled;
-(void)setHasInstalled:(BOOL)arg1 ;
-(BOOL)hasInstalled;
-(void)setHasSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasSharingEnabled;
-(void)setHasPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)hasPersonalAutomationsEnabled;
-(void)setHasHomeAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)hasHomeAutomationsEnabled;
@end

