/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSDictionary;

@interface CATContext : NSObject {

	BOOL _isMultiUserEnabled;
	BOOL _requiresUserGrounding;
	unsigned _randomSeed;
	NSString* _siriLocale;
	NSString* _siriVoiceGender;
	long long _currentTime;
	NSDictionary* _userSettings;

}

@property (nonatomic,retain) NSString * siriLocale;                    //@synthesize siriLocale=_siriLocale - In the implementation block
@property (nonatomic,retain) NSString * siriVoiceGender;               //@synthesize siriVoiceGender=_siriVoiceGender - In the implementation block
@property (assign) BOOL isMultiUserEnabled;                            //@synthesize isMultiUserEnabled=_isMultiUserEnabled - In the implementation block
@property (assign) BOOL requiresUserGrounding;                         //@synthesize requiresUserGrounding=_requiresUserGrounding - In the implementation block
@property (assign) unsigned randomSeed;                                //@synthesize randomSeed=_randomSeed - In the implementation block
@property (assign) long long currentTime;                              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSDictionary * userSettings;              //@synthesize userSettings=_userSettings - In the implementation block
-(NSDictionary *)userSettings;
-(id)init;
-(void)setCurrentTime:(long long)arg1 ;
-(void)setUserSettings:(NSDictionary *)arg1 ;
-(unsigned)randomSeed;
-(long long)currentTime;
-(BOOL)isMultiUserEnabled;
-(void)setRandomSeed:(unsigned)arg1 ;
-(void)setSiriVoiceGender:(NSString *)arg1 ;
-(void)setIsMultiUserEnabled:(BOOL)arg1 ;
-(void)setRequiresUserGrounding:(BOOL)arg1 ;
-(NSString *)siriVoiceGender;
-(BOOL)requiresUserGrounding;
-(id)initWithInputLocale:(id)arg1 outputVoiceLocale:(id)arg2 ;
-(id)toDictionary;
-(void)setSiriLocale:(NSString *)arg1 ;
-(NSString *)siriLocale;
@end

