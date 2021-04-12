/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSNumber;

@interface BLTSectionInfoOverride : NSObject {

	NSNumber* _grouping;
	NSNumber* _level;
	NSNumber* _sound;
	NSNumber* _criticalAlert;

}

@property (nonatomic,retain) NSNumber * grouping;                   //@synthesize grouping=_grouping - In the implementation block
@property (nonatomic,retain) NSNumber * level;                      //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSNumber * sound;                      //@synthesize sound=_sound - In the implementation block
@property (nonatomic,retain) NSNumber * criticalAlert;              //@synthesize criticalAlert=_criticalAlert - In the implementation block
-(NSNumber *)level;
-(void)setLevel:(NSNumber *)arg1 ;
-(void)setSound:(NSNumber *)arg1 ;
-(NSNumber *)sound;
-(void)setGrouping:(NSNumber *)arg1 ;
-(NSNumber *)grouping;
-(NSNumber *)criticalAlert;
-(void)setCriticalAlert:(NSNumber *)arg1 ;
-(id)initWithOverrides:(id)arg1 ;
@end

