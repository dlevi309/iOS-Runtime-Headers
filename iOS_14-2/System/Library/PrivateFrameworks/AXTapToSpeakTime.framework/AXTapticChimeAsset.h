/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
*/


@class NSString, NSDictionary, NSArray;

@interface AXTapticChimeAsset : NSObject {

	float _volume;
	NSString* _audioFilePath;
	double _prePlayTimeInterval;
	NSDictionary* _hapticDictionary;

}

@property (nonatomic,readonly) NSDictionary * hapticDictionary;              //@synthesize hapticDictionary=_hapticDictionary - In the implementation block
@property (nonatomic,readonly) NSString * audioFilePath;                     //@synthesize audioFilePath=_audioFilePath - In the implementation block
@property (nonatomic,readonly) double prePlayTimeInterval;                   //@synthesize prePlayTimeInterval=_prePlayTimeInterval - In the implementation block
@property (nonatomic,readonly) float volume;                                 //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) NSArray * hapticAtomEntries; 
+(id)quarterHourAssetForType:(long long)arg1 ;
+(id)hourAssetForType:(long long)arg1 hour:(unsigned long long)arg2 ;
+(id)_assetPathForChimeSoundType:(long long)arg1 fileName:(id)arg2 ;
-(id)description;
-(float)volume;
-(NSString *)audioFilePath;
-(unsigned)createSystemSoundIDForStartTime:(double)arg1 ;
-(NSArray *)hapticAtomEntries;
-(double)prePlayTimeInterval;
-(id)_initWithChimeSoundType:(long long)arg1 audioFilePath:(id)arg2 hapticsFilePath:(id)arg3 ;
-(NSDictionary *)hapticDictionary;
@end

