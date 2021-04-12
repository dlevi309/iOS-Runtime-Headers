/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray;

@interface FTAcousticFeature : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const AcousticFeature* _root;

}

@property (nonatomic,readonly) NSArray * acoustic_feature_per_frame; 
@property (nonatomic,readonly) float frame_duration; 
-(NSArray *)acoustic_feature_per_frame;
-(float)frame_duration;
-(id)initWithFlatbuffData:(id)arg1 root:(const AcousticFeature*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AcousticFeature>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const AcousticFeature*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

