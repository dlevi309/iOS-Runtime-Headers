/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSDictionary, NSData, _MRVoiceInputDeviceDescriptorProtobuf;

@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying> {

	NSArray* _supportedFormats;
	NSDictionary* _defaultFormat;

}

@property (nonatomic,readonly) NSArray * supportedFormats;                                    //@synthesize supportedFormats=_supportedFormats - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultFormat;                                  //@synthesize defaultFormat=_defaultFormat - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) _MRVoiceInputDeviceDescriptorProtobuf * protobuf; 
-(NSArray *)supportedFormats;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(NSDictionary *)defaultFormat;
-(_MRVoiceInputDeviceDescriptorProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

