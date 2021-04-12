/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData;

@interface FTItnAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ItnAlignment* _root;

}

@property (nonatomic,readonly) int first_pre_itn_token_index; 
@property (nonatomic,readonly) int last_pre_itn_token_index; 
@property (nonatomic,readonly) int first_post_itn_char_pos; 
@property (nonatomic,readonly) int last_post_itn_char_pos; 
-(int)first_pre_itn_token_index;
-(int)last_pre_itn_token_index;
-(int)first_post_itn_char_pos;
-(int)last_post_itn_char_pos;
-(id)initWithFlatbuffData:(id)arg1 root:(const ItnAlignment*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ItnAlignment>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ItnAlignment*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

