/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)sound;
-(void)setSound:(NSNumber *)arg1 ;
-(NSNumber *)grouping;
-(void)setGrouping:(NSNumber *)arg1 ;
-(NSNumber *)level;
-(void)setLevel:(NSNumber *)arg1 ;
-(void)setCriticalAlert:(NSNumber *)arg1 ;
-(NSNumber *)criticalAlert;
-(id)initWithOverrides:(id)arg1 ;
@end

