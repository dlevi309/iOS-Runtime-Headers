/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class NSString, NSNumber;

@interface VSDownloadMetrics : NSObject {

	BOOL _isCellularAllowed;
	BOOL _discretionary;
	float _downloadProgress;
	NSString* _clientBundleIdentifier;
	NSNumber* _downloadSize;
	long long _errorCode;
	NSString* _voiceDownloadKey;
	long long _downloadBeginTimestamp;
	long long _downloadEndTimestamp;

}

@property (readonly) NSString * voiceDownloadKey;                   //@synthesize voiceDownloadKey=_voiceDownloadKey - In the implementation block
@property (readonly) long long downloadBeginTimestamp;              //@synthesize downloadBeginTimestamp=_downloadBeginTimestamp - In the implementation block
@property (readonly) long long downloadEndTimestamp;                //@synthesize downloadEndTimestamp=_downloadEndTimestamp - In the implementation block
@property (copy) NSString * clientBundleIdentifier;                 //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign) BOOL isCellularAllowed;                          //@synthesize isCellularAllowed=_isCellularAllowed - In the implementation block
@property (assign) BOOL discretionary;                              //@synthesize discretionary=_discretionary - In the implementation block
@property (copy) NSNumber * downloadSize;                           //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign) float downloadProgress;                          //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign) long long errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
+(double)_clockFactor;
-(void)setDiscretionary:(BOOL)arg1 ;
-(NSString *)clientBundleIdentifier;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)downloadSize;
-(double)downloadDuration;
-(long long)errorCode;
-(float)downloadProgress;
-(void)setDownloadSize:(NSNumber *)arg1 ;
-(id)dictionaryMetrics;
-(id)description;
-(id)initWithVoiceName:(id)arg1 languageCode:(id)arg2 gender:(long long)arg3 ;
-(void)setIsCellularAllowed:(BOOL)arg1 ;
-(BOOL)isCellularAllowed;
-(BOOL)endMetrics;
-(NSString *)voiceDownloadKey;
-(long long)downloadBeginTimestamp;
-(long long)downloadEndTimestamp;
-(void)setErrorCode:(long long)arg1 ;
-(BOOL)discretionary;
-(void)setDownloadProgress:(float)arg1 ;
@end

