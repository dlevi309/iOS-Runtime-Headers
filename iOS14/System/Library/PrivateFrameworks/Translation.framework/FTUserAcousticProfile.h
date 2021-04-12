/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTUserAcousticProfile : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const UserAcousticProfile* _root;

}

@property (nonatomic,readonly) NSString * acoustic_profile_version; 
@property (nonatomic,readonly) NSData * acoustic_profile_blob; 
@property (nonatomic,readonly) NSString * profile_checksum; 
-(NSString *)profile_checksum;
-(NSData *)acoustic_profile_blob;
-(NSString *)acoustic_profile_version;
-(void)acoustic_profile_blob:(/*^block*/id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const UserAcousticProfile*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::UserAcousticProfile>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const UserAcousticProfile*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

