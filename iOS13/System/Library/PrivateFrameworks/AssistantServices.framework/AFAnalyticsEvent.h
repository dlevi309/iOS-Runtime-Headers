/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(NSData *)contextData;
-(id)typeName;
-(unsigned long long)deliveryStream;
-(long long)contextDataType;
-(id)initWithDeliveryStream:(unsigned long long)arg1 type:(long long)arg2 timestamp:(unsigned long long)arg3 contextDataType:(long long)arg4 contextData:(id)arg5 ;
-(id)contextDataAsProtobuf;
-(id)legacyTypeName;
-(id)contextDataAsDictionary;
-(id)dateStamp;
@end

