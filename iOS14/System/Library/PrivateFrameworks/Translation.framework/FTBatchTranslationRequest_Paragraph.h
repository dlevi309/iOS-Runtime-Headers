/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTBatchTranslationRequest_Paragraph : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const Paragraph* _root;

}

@property (nonatomic,readonly) NSString * paragraph_id; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSArray * span; 
-(NSArray *)span;
-(NSString *)text;
-(NSString *)paragraph_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const Paragraph*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BatchTranslationRequest_::Paragraph>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const Paragraph*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

