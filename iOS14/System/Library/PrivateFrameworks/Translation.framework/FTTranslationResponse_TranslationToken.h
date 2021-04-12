/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTAlignment;

@interface FTTranslationResponse_TranslationToken : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TranslationToken* _root;

}

@property (nonatomic,readonly) NSString * token; 
@property (nonatomic,readonly) float confidence; 
@property (nonatomic,readonly) FTAlignment * mt_alignment; 
@property (nonatomic,readonly) BOOL add_space_after; 
-(float)confidence;
-(BOOL)add_space_after;
-(FTAlignment *)mt_alignment;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationToken*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TranslationResponse_::TranslationToken>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationToken*)arg2 ;
-(NSString *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

