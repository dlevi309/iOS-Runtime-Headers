/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTUserLanguageProfile : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const UserLanguageProfile* _root;

}

@property (nonatomic,readonly) NSData * profile_blob; 
@property (nonatomic,readonly) NSString * profile_blob_version; 
@property (nonatomic,readonly) NSString * profile_checksum; 
-(NSData *)profile_blob;
-(void)profile_blob:(/*^block*/id)arg1 ;
-(NSString *)profile_blob_version;
-(NSString *)profile_checksum;
-(id)initWithFlatbuffData:(id)arg1 root:(const UserLanguageProfile*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::UserLanguageProfile>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const UserLanguageProfile*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

