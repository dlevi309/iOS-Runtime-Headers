/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class NSString, _LTLocalePair, NSURL;

@interface _LTTranslationRequest : NSObject {

	BOOL _censorSpeech;
	BOOL _forcedOfflineTranslation;
	BOOL __forcedOnlineTranslation;
	BOOL _autodetectLanguage;
	NSString* _uniqueID;
	NSString* _sessionID;
	long long _taskHint;
	_LTLocalePair* _localePair;
	NSURL* _outputFileURL;
	NSURL* __offlineMTModelURL;
	long long __mtConfidenceThreshold;

}

@property (nonatomic,readonly) NSString * loggingType; 
@property (nonatomic,copy) NSString * uniqueID;                             //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) long long taskHint;                            //@synthesize taskHint=_taskHint - In the implementation block
@property (nonatomic,readonly) _LTLocalePair * localePair;                  //@synthesize localePair=_localePair - In the implementation block
@property (nonatomic,retain) NSURL * outputFileURL;                         //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (assign,nonatomic) BOOL censorSpeech;                             //@synthesize censorSpeech=_censorSpeech - In the implementation block
@property (assign,nonatomic) BOOL forcedOfflineTranslation;                 //@synthesize forcedOfflineTranslation=_forcedOfflineTranslation - In the implementation block
@property (assign,nonatomic) BOOL _forcedOnlineTranslation;                 //@synthesize _forcedOnlineTranslation=__forcedOnlineTranslation - In the implementation block
@property (nonatomic,retain) NSURL * _offlineMTModelURL;                    //@synthesize _offlineMTModelURL=__offlineMTModelURL - In the implementation block
@property (assign,nonatomic) long long _mtConfidenceThreshold;              //@synthesize _mtConfidenceThreshold=__mtConfidenceThreshold - In the implementation block
@property (assign,nonatomic) BOOL autodetectLanguage;                       //@synthesize autodetectLanguage=_autodetectLanguage - In the implementation block
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(BOOL)forcedOfflineTranslation;
-(BOOL)_forcedOnlineTranslation;
-(void)_startTranslationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(void)setCensorSpeech:(BOOL)arg1 ;
-(id)initWithLocalePair:(id)arg1 ;
-(NSURL *)_offlineMTModelURL;
-(NSString *)loggingType;
-(void)_translationFailedWithError:(id)arg1 ;
-(void)setForcedOfflineTranslation:(BOOL)arg1 ;
-(void)set_forcedOnlineTranslation:(BOOL)arg1 ;
-(void)set_offlineMTModelURL:(NSURL *)arg1 ;
-(long long)_mtConfidenceThreshold;
-(void)set_mtConfidenceThreshold:(long long)arg1 ;
-(id)requestContext;
-(NSURL *)outputFileURL;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(_LTLocalePair *)localePair;
-(id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2 ;
-(BOOL)censorSpeech;
-(BOOL)autodetectLanguage;
-(void)setAutodetectLanguage:(BOOL)arg1 ;
-(long long)taskHint;
-(void)setTaskHint:(long long)arg1 ;
@end

