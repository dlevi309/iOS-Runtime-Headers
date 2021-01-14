/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


@class NSMutableDictionary;

@interface SFSSTTSEngineFactory : NSObject {

	NSMutableDictionary* _keyToTTSEngineMap;

}

@property (nonatomic,retain) NSMutableDictionary * keyToTTSEngineMap;              //@synthesize keyToTTSEngineMap=_keyToTTSEngineMap - In the implementation block
+(id)sharedInstance;
+(id)getKeyByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(id)init;
-(id)getEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(NSMutableDictionary *)keyToTTSEngineMap;
-(void)removeEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(void)removeAllEngines;
-(void)setKeyToTTSEngineMap:(NSMutableDictionary *)arg1 ;
@end

