/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTClientSetupInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ClientSetupInfo* _root;

}

@property (nonatomic,readonly) float endpoint_threshold; 
@property (nonatomic,readonly) BOOL endpoint_extra_delay; 
@property (nonatomic,readonly) NSString * speech_id; 
-(NSString *)speech_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const ClientSetupInfo*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ClientSetupInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ClientSetupInfo*)arg2 ;
-(float)endpoint_threshold;
-(BOOL)endpoint_extra_delay;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

