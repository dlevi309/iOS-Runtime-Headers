/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary, GKPlayerInternal, NSDate;

@interface GKAchievementInternal : GKInternalRepresentation {

	NSString* _identifier;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _achievedDescription;
	NSString* _unachievedDescription;
	NSDictionary* _icons;
	GKPlayerInternal* _player;
	SCD_Union_GK11 _attributes;
	NSDate* _lastReportedDate;
	double _percentComplete;

}

@property (assign,nonatomic) unsigned attributes; 
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                       //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * achievedDescription;                   //@synthesize achievedDescription=_achievedDescription - In the implementation block
@property (nonatomic,retain) NSString * unachievedDescription;                 //@synthesize unachievedDescription=_unachievedDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                             //@synthesize icons=_icons - In the implementation block
@property (assign,nonatomic) unsigned short maximumPoints; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isReplayable,nonatomic) BOOL replayable; 
@property (nonatomic,retain) NSDate * lastReportedDate;                        //@synthesize lastReportedDate=_lastReportedDate - In the implementation block
@property (assign,nonatomic) double percentComplete;                           //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;                        //@synthesize player=_player - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned)attributes;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)icons;
-(void)setAttributes:(unsigned)arg1 ;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(double)percentComplete;
-(void)setPercentComplete:(double)arg1 ;
-(void)setIcons:(NSDictionary *)arg1 ;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(NSDate *)lastReportedDate;
-(BOOL)isReplayable;
-(unsigned short)maximumPoints;
-(NSString *)achievedDescription;
-(NSString *)unachievedDescription;
-(void)mergePropertiesFromDescription:(id)arg1 ;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(void)setLastReportedDate:(NSDate *)arg1 ;
-(void)setAchievedDescription:(NSString *)arg1 ;
-(void)setUnachievedDescription:(NSString *)arg1 ;
-(void)setMaximumPoints:(unsigned short)arg1 ;
-(void)setReplayable:(BOOL)arg1 ;
@end

