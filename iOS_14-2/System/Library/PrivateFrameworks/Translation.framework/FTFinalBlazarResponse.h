/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTFinalBlazarResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const FinalBlazarResponse* _root;

}

@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
-(int)return_code;
-(NSString *)return_str;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinalBlazarResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::FinalBlazarResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinalBlazarResponse*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

