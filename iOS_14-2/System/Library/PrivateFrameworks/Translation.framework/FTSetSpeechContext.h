/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray, NSString;

@interface FTSetSpeechContext : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SetSpeechContext* _root;

}

@property (nonatomic,readonly) NSArray * contextual_text; 
@property (nonatomic,readonly) NSString * left_context; 
@property (nonatomic,readonly) NSString * right_context; 
@property (nonatomic,readonly) NSArray * context_with_pron_hints; 
-(NSArray *)contextual_text;
-(NSString *)left_context;
-(NSString *)right_context;
-(NSArray *)context_with_pron_hints;
-(id)initWithFlatbuffData:(id)arg1 root:(const SetSpeechContext*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SetSpeechContext>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SetSpeechContext*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

