/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
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

