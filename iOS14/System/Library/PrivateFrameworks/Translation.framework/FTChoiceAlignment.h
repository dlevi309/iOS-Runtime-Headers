/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray;

@interface FTChoiceAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ChoiceAlignment* _root;

}

@property (nonatomic,readonly) NSArray * post_itn_choice_indices; 
@property (nonatomic,readonly) NSArray * pre_itn_token_to_post_itn_char_alignments; 
-(NSArray *)post_itn_choice_indices;
-(NSArray *)pre_itn_token_to_post_itn_char_alignments;
-(id)initWithFlatbuffData:(id)arg1 root:(const ChoiceAlignment*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ChoiceAlignment>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ChoiceAlignment*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

