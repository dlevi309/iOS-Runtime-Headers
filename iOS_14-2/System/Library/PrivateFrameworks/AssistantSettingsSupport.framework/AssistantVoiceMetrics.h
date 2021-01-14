/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableSet;

@interface AssistantVoiceMetrics : NSObject <NSSecureCoding> {

	BOOL _previewedSuccessfully;
	BOOL _isCellularAllowed;
	BOOL _downloadError;
	BOOL _sentOnce;
	float _downloadObservationProgress;
	NSString* _voiceDownloadKey;
	NSString* _lastVoicePreviewedKey;
	unsigned long long _voicesPreviewed;
	long long _downloadObservationBeginTimestamp;
	long long _downloadObservationEndTimestamp;
	NSMutableSet* _mutableUniqueVoicesPreviewed;

}

@property (readonly) NSString * voiceDownloadKey;                              //@synthesize voiceDownloadKey=_voiceDownloadKey - In the implementation block
@property (readonly) NSString * lastVoicePreviewedKey;                         //@synthesize lastVoicePreviewedKey=_lastVoicePreviewedKey - In the implementation block
@property (readonly) unsigned long long voicesPreviewed;                       //@synthesize voicesPreviewed=_voicesPreviewed - In the implementation block
@property (readonly) unsigned long long uniqueVoicesPreviewed; 
@property (readonly) long long downloadObservationBeginTimestamp;              //@synthesize downloadObservationBeginTimestamp=_downloadObservationBeginTimestamp - In the implementation block
@property (readonly) long long downloadObservationEndTimestamp;                //@synthesize downloadObservationEndTimestamp=_downloadObservationEndTimestamp - In the implementation block
@property (assign,nonatomic) BOOL sentOnce;                                    //@synthesize sentOnce=_sentOnce - In the implementation block
@property (retain) NSMutableSet * mutableUniqueVoicesPreviewed;                //@synthesize mutableUniqueVoicesPreviewed=_mutableUniqueVoicesPreviewed - In the implementation block
@property (assign) BOOL previewedSuccessfully;                                 //@synthesize previewedSuccessfully=_previewedSuccessfully - In the implementation block
@property (assign) BOOL isCellularAllowed;                                     //@synthesize isCellularAllowed=_isCellularAllowed - In the implementation block
@property (assign) float downloadObservationProgress;                          //@synthesize downloadObservationProgress=_downloadObservationProgress - In the implementation block
@property (assign) BOOL downloadError;                                         //@synthesize downloadError=_downloadError - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyForLanguage:(id)arg1 gender:(long long)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryMetrics;
-(double)_clockFactor;
-(id)description;
-(void)setIsCellularAllowed:(BOOL)arg1 ;
-(BOOL)isCellularAllowed;
-(NSString *)voiceDownloadKey;
-(id)initWithCoder:(id)arg1 ;
-(void)setDownloadError:(BOOL)arg1 ;
-(BOOL)downloadError;
-(void)sendAnalyticsEvent;
-(unsigned long long)uniqueVoicesPreviewed;
-(double)downloadObservationDuration;
-(void)endDownloadObservation;
-(void)setVoiceDownloadForLanguageCode:(id)arg1 gender:(long long)arg2 ;
-(void)setVoicePreviewedForLanguageCode:(id)arg1 gender:(long long)arg2 ;
-(void)beginDownloadObservation;
-(BOOL)previewedSuccessfully;
-(void)setPreviewedSuccessfully:(BOOL)arg1 ;
-(float)downloadObservationProgress;
-(void)setDownloadObservationProgress:(float)arg1 ;
-(NSString *)lastVoicePreviewedKey;
-(unsigned long long)voicesPreviewed;
-(long long)downloadObservationBeginTimestamp;
-(long long)downloadObservationEndTimestamp;
-(BOOL)sentOnce;
-(void)setSentOnce:(BOOL)arg1 ;
-(NSMutableSet *)mutableUniqueVoicesPreviewed;
-(void)setMutableUniqueVoicesPreviewed:(NSMutableSet *)arg1 ;
@end

