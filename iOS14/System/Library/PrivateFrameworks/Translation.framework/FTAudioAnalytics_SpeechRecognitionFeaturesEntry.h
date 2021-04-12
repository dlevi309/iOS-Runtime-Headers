/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTAudioAnalytics_SpeechRecognitionFeaturesEntry : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SpeechRecognitionFeaturesEntry* _root;

}

@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) float value; 
-(NSString *)key;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechRecognitionFeaturesEntry*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AudioAnalytics_::SpeechRecognitionFeaturesEntry>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechRecognitionFeaturesEntry*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)value;
@end

