/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
*/


@class PAConfiguration, NSMutableDictionary;

@interface PAEnrollment : NSObject {

	unsigned long long _progress;
	PAConfiguration* _audiogramPreset;
	NSMutableDictionary* _enrollmentHandlers;
	unsigned long long _selectedLevel;

}

@property (nonatomic,retain) PAConfiguration * audiogramPreset;                     //@synthesize audiogramPreset=_audiogramPreset - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * enrollmentHandlers;              //@synthesize enrollmentHandlers=_enrollmentHandlers - In the implementation block
@property (assign,nonatomic) unsigned long long selectedLevel;                      //@synthesize selectedLevel=_selectedLevel - In the implementation block
@property (assign,nonatomic) unsigned long long progress;                           //@synthesize progress=_progress - In the implementation block
+(id)enrollmentWithAudiogram:(id)arg1 ;
-(unsigned long long)progress;
-(id)init;
-(void)setProgress:(unsigned long long)arg1 ;
-(void)setSelectedLevel:(unsigned long long)arg1 ;
-(unsigned long long)selectedLevel;
-(void)setAudiogramPreset:(PAConfiguration *)arg1 ;
-(void)addHandlers;
-(void)addEnrollmentStepForSection:(unsigned long long)arg1 comparing:(unsigned long long)arg2 withOption:(unsigned long long)arg3 andBlock:(/*^block*/id)arg4 ;
-(void)addOffEnrollmentStepComparing:(unsigned long long)arg1 ;
-(void)addLevelEnrollmentStepsStartingWith:(unsigned long long)arg1 ;
-(NSMutableDictionary *)enrollmentHandlers;
-(void)setEnrollmentHandlers:(NSMutableDictionary *)arg1 ;
-(id)enrollmentNodeAfter:(id)arg1 withSelectedNode:(id)arg2 ;
-(PAConfiguration *)audiogramPreset;
@end

