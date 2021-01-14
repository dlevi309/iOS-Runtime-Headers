/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _serializedBackingStore;
	long long _voiceTriggerEnabled;

}

@property (nonatomic,readonly) long long voiceTriggerEnabled;              //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(long long)voiceTriggerEnabled;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)serializedBackingStore;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithVoiceTriggerEnabled:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

