/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _deliveryStream;
	long long _type;
	unsigned long long _timestamp;
	long long _contextDataType;
	NSData* _contextData;

}

@property (nonatomic,readonly) unsigned long long deliveryStream;              //@synthesize deliveryStream=_deliveryStream - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long contextDataType;                      //@synthesize contextDataType=_contextDataType - In the implementation block
@property (nonatomic,copy,readonly) NSData * contextData;                      //@synthesize contextData=_contextData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventsReferenceTime;
-(id)legacyTypeName;
-(NSData *)contextData;
-(long long)contextDataType;
-(id)init;
-(id)dateStamp;
-(unsigned long long)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDeliveryStream:(unsigned long long)arg1 type:(long long)arg2 timestamp:(unsigned long long)arg3 contextDataType:(long long)arg4 contextData:(id)arg5 ;
-(id)typeName;
-(id)contextDataAsProtobuf;
-(long long)type;
-(unsigned long long)hash;
-(id)contextDataAsDictionary;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)deliveryStream;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

