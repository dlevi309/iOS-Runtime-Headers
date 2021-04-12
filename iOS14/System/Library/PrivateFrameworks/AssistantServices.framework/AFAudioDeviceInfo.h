/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface AFAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRemoteDevice;
	NSString* _route;
	NSUUID* _deviceUID;

}

@property (nonatomic,copy,readonly) NSString * route;                //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteDevice;                  //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * deviceUID;              //@synthesize deviceUID=_deviceUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSUUID *)deviceUID;
-(NSString *)route;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRemoteDevice;
-(id)initWithRoute:(id)arg1 isRemoteDevice:(BOOL)arg2 deviceUID:(id)arg3 ;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

