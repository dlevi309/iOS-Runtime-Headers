/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _LTLocalePair, NSURL, NSArray;

@interface _LTTranslationContext : NSObject <NSSecureCoding> {

	BOOL _autodetectLanguage;
	BOOL _censorSpeech;
	BOOL _autoEndpoint;
	unsigned _audioSessionID;
	NSString* _uniqueID;
	NSString* _sessionID;
	long long _taskHint;
	_LTLocalePair* _localePair;
	NSURL* _outputFileURL;
	NSArray* _asrModelURLs;
	NSURL* _mtModelURL;
	NSURL* _sourceURL;
	long long _lidThreshold;
	long long _route;
	long long _asrConfidenceThreshold;
	NSString* _clientIdentifier;
	long long _dataSharingOptInStatus;

}

@property (nonatomic,copy) NSString * uniqueID;                             //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) long long taskHint;                            //@synthesize taskHint=_taskHint - In the implementation block
@property (nonatomic,copy) _LTLocalePair * localePair;                      //@synthesize localePair=_localePair - In the implementation block
@property (assign,nonatomic) BOOL autodetectLanguage;                       //@synthesize autodetectLanguage=_autodetectLanguage - In the implementation block
@property (assign,nonatomic) BOOL censorSpeech;                             //@synthesize censorSpeech=_censorSpeech - In the implementation block
@property (nonatomic,copy) NSURL * outputFileURL;                           //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (nonatomic,copy) NSArray * asrModelURLs;                          //@synthesize asrModelURLs=_asrModelURLs - In the implementation block
@property (nonatomic,copy) NSURL * mtModelURL;                              //@synthesize mtModelURL=_mtModelURL - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                               //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) BOOL autoEndpoint;                             //@synthesize autoEndpoint=_autoEndpoint - In the implementation block
@property (assign,nonatomic) long long lidThreshold;                        //@synthesize lidThreshold=_lidThreshold - In the implementation block
@property (assign,nonatomic) long long route;                               //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                       //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) long long asrConfidenceThreshold;              //@synthesize asrConfidenceThreshold=_asrConfidenceThreshold - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                   //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) long long dataSharingOptInStatus;              //@synthesize dataSharingOptInStatus=_dataSharingOptInStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setRoute:(long long)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(unsigned)audioSessionID;
-(NSURL *)sourceURL;
-(NSString *)uniqueID;
-(long long)route;
-(id)init;
-(long long)_ospreyDataSharingStatus;
-(id)_ttsVoiceStringWithLocale:(id)arg1 ;
-(void)setCensorSpeech:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)dataSharingOptInStatus;
-(NSURL *)outputFileURL;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(void)setDataSharingOptInStatus:(long long)arg1 ;
-(_LTLocalePair *)localePair;
-(BOOL)censorSpeech;
-(void)setLocalePair:(_LTLocalePair *)arg1 ;
-(BOOL)autodetectLanguage;
-(void)setAutodetectLanguage:(BOOL)arg1 ;
-(NSArray *)asrModelURLs;
-(void)setAsrModelURLs:(NSArray *)arg1 ;
-(NSURL *)mtModelURL;
-(void)setMtModelURL:(NSURL *)arg1 ;
-(BOOL)autoEndpoint;
-(void)setAutoEndpoint:(BOOL)arg1 ;
-(long long)lidThreshold;
-(void)setLidThreshold:(long long)arg1 ;
-(long long)asrConfidenceThreshold;
-(void)setAsrConfidenceThreshold:(long long)arg1 ;
-(long long)taskHint;
-(id)initWithCoder:(id)arg1 ;
-(id)_ospreyTTSRequestWithText:(id)arg1 ;
-(id)_ospreySpeechTranslationRequestWithHybridEndpointer:(BOOL)arg1 ;
-(id)_ospreyTextToSpeechTranslationRequestWithText:(id)arg1 ;
-(NSString *)clientIdentifier;
-(void)setTaskHint:(long long)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
@end

