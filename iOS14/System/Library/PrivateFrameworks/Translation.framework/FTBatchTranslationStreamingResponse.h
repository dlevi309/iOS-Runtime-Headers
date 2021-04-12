/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTBatchTranslationResponse, FTFinalBlazarResponse;

@interface FTBatchTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const BatchTranslationStreamingResponse* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTBatchTranslationResponse * contentAsFTBatchTranslationResponse; 
@property (nonatomic,readonly) FTFinalBlazarResponse * contentAsFTFinalBlazarResponse; 
-(long long)content_type;
-(FTBatchTranslationResponse *)contentAsFTBatchTranslationResponse;
-(FTFinalBlazarResponse *)contentAsFTFinalBlazarResponse;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::BatchTranslationStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationStreamingResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

