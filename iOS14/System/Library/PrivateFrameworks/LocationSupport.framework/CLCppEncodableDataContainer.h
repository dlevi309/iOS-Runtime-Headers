/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLCppContainer.h>

@class NSData;

@interface CLCppEncodableDataContainer : CLCppContainer {

	NSData* _serialized;
	id _compatibilityInfo;
	/*^block*/id _encoder;

}

@property (nonatomic,copy) NSData * serialized;               //@synthesize serialized=_serialized - In the implementation block
@property (nonatomic,copy) id compatibilityInfo;              //@synthesize compatibilityInfo=_compatibilityInfo - In the implementation block
@property (nonatomic,copy) id encoder;                        //@synthesize encoder=_encoder - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)containerWithObject:(void*)arg1 cppDataEncoder:(/*^block*/id)arg2 destructor:(/*^block*/id)arg3 binaryVersion:(unsigned long long)arg4 typeSize:(unsigned long long)arg5 ;
-(id)initWithObject:(void*)arg1 cppDataEncoder:(/*^block*/id)arg2 destructor:(/*^block*/id)arg3 binaryVersion:(unsigned long long)arg4 typeSize:(unsigned long long)arg5 ;
-(NSData *)serialized;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEncoder:(id)arg1 ;
-(id)encoder;
-(void)setSerialized:(NSData *)arg1 ;
-(id)compatibilityInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)setCompatibilityInfo:(id)arg1 ;
-(void)dealloc;
@end

