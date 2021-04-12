/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class VSVoiceAsset, NSString, NSError, NSArray, MAProgressNotification;

@interface _LTLanguageAssetStatus : NSObject {

	long long _progress;
	unsigned long long _status;
	VSVoiceAsset* _voiceAsset;
	NSString* _identifier;
	NSError* _error;
	NSArray* _localIdentifiers;
	MAProgressNotification* _update;

}

@property (assign,nonatomic) long long progress;                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) VSVoiceAsset * voiceAsset;                    //@synthesize voiceAsset=_voiceAsset - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * localIdentifiers;                   //@synthesize localIdentifiers=_localIdentifiers - In the implementation block
@property (nonatomic,retain) MAProgressNotification * update;              //@synthesize update=_update - In the implementation block
-(void)setUpdate:(MAProgressNotification *)arg1 ;
-(long long)progress;
-(NSArray *)localIdentifiers;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(MAProgressNotification *)update;
-(id)description;
-(void)setProgress:(long long)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(VSVoiceAsset *)voiceAsset;
-(id)_LTAssetStateString;
-(void)setVoiceAsset:(VSVoiceAsset *)arg1 ;
-(void)setLocalIdentifiers:(NSArray *)arg1 ;
-(unsigned long long)status;
@end

