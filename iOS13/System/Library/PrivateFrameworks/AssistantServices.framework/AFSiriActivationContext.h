/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AFSiriActivationContext : NSObject <NSCopying, NSSecureCoding> {

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
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)source;
-(unsigned long long)timestamp;
-(NSString *)deviceID;
-(long long)event;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithTimestamp:(unsigned long long)arg1 source:(long long)arg2 event:(long long)arg3 options:(unsigned long long)arg4 deviceID:(id)arg5 userInfo:(id)arg6 ;
@end

