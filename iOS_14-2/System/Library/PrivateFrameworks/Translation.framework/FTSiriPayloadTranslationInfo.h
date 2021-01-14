/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTRecognitionSausage;

@interface FTSiriPayloadTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SiriPayloadTranslationInfo* _root;

}

@property (nonatomic,readonly) NSString * pre_itn_payload; 
@property (nonatomic,readonly) NSString * post_itn_payload; 
@property (nonatomic,readonly) FTRecognitionSausage * pre_sausage_payload; 
-(NSString *)pre_itn_payload;
-(NSString *)post_itn_payload;
-(FTRecognitionSausage *)pre_sausage_payload;
-(id)initWithFlatbuffData:(id)arg1 root:(const SiriPayloadTranslationInfo*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SiriPayloadTranslationInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SiriPayloadTranslationInfo*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

