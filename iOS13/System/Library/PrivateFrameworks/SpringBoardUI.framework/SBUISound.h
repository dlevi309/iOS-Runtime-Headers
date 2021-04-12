/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@class NSDictionary, TLAlert, NSString;

@interface SBUISound : NSObject {

	long long _soundType;
	unsigned _systemSoundID;
	unsigned _resolvedSystemSoundID;
	unsigned long long _soundBehavior;
	NSDictionary* _vibrationPattern;
	TLAlert* _toneAlert;
	/*^block*/id _completionBlock;
	NSString* _songPath;
	long long _eventType;

}

@property (assign,nonatomic) long long soundType;                                                      //@synthesize soundType=_soundType - In the implementation block
@property (assign,nonatomic) unsigned systemSoundID;                                                   //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (assign,setter=_setResolvedSoundID:,nonatomic) unsigned _resolvedSystemSoundID;              //@synthesize resolvedSystemSoundID=_resolvedSystemSoundID - In the implementation block
@property (assign,nonatomic) unsigned long long soundBehavior;                                         //@synthesize soundBehavior=_soundBehavior - In the implementation block
@property (nonatomic,retain) NSDictionary * vibrationPattern;                                          //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (nonatomic,retain) TLAlert * toneAlert;                                                      //@synthesize toneAlert=_toneAlert - In the implementation block
@property (nonatomic,copy) NSString * songPath;                                                        //@synthesize songPath=_songPath - In the implementation block
@property (assign,nonatomic) long long eventType;                                                      //@synthesize eventType=_eventType - In the implementation block
+(id)soundWithFeedbackEventType:(long long)arg1 ;
-(id)description;
-(void)stop;
-(long long)eventType;
-(/*^block*/id)_completionBlock;
-(BOOL)isPlaying;
-(unsigned)systemSoundID;
-(void)setEventType:(long long)arg1 ;
-(NSDictionary *)vibrationPattern;
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(long long)soundType;
-(void)setSoundType:(long long)arg1 ;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithToneAlertConfiguration:(id)arg1 ;
-(unsigned long long)soundBehavior;
-(void)setSoundBehavior:(unsigned long long)arg1 ;
-(void)setSystemSoundID:(unsigned)arg1 ;
-(id)initWithToneAlert:(id)arg1 ;
-(NSString *)songPath;
-(void)setSongPath:(NSString *)arg1 ;
-(BOOL)playInEvironments:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setToneAlert:(TLAlert *)arg1 ;
-(id)initWithFeedbackEventType:(long long)arg1 ;
-(TLAlert *)toneAlert;
-(id)initWithSystemSoundID:(unsigned)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3 ;
-(id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3 ;
-(id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4 ;
-(unsigned)_resolvedSystemSoundID;
-(void)_setResolvedSoundID:(unsigned)arg1 ;
@end

