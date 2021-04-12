/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString, NSDictionary;

@interface AFSiriActivationContext : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	unsigned long long _timestamp;
	long long _source;
	long long _event;
	unsigned long long _options;
	NSString* _deviceID;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long source;                          //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) long long event;                           //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)deviceID;
-(NSDictionary *)userInfo;
-(unsigned long long)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(NSString *)description;
-(long long)event;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithTimestamp:(unsigned long long)arg1 source:(long long)arg2 event:(long long)arg3 options:(unsigned long long)arg4 deviceID:(id)arg5 userInfo:(id)arg6 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)source;
@end

