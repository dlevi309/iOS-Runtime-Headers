/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTLanguageDetectionPrediction : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const LanguageDetectionPrediction* _root;

}

@property (nonatomic,readonly) NSString * locale; 
@property (nonatomic,readonly) float confidence; 
@property (nonatomic,readonly) float threshold; 
@property (nonatomic,readonly) BOOL is_low_confidence; 
-(float)confidence;
-(float)threshold;
-(NSString *)locale;
-(id)initWithFlatbuffData:(id)arg1 root:(const LanguageDetectionPrediction*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::LanguageDetectionPrediction>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const LanguageDetectionPrediction*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)is_low_confidence;
@end

