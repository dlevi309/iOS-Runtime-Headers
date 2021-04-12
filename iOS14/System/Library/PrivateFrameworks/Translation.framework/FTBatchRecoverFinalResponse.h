/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTBatchRecoverFinalResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const BatchRecoverFinalResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int error_code; 
@property (nonatomic,readonly) NSString * error_str; 
@property (nonatomic,readonly) int num_of_requested; 
@property (nonatomic,readonly) int num_of_processed; 
@property (nonatomic,readonly) int num_of_succeeded; 
-(int)num_of_requested;
-(int)num_of_processed;
-(int)num_of_succeeded;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchRecoverFinalResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BatchRecoverFinalResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchRecoverFinalResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

