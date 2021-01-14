/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFBluetoothWirelessSplitterSessionInfo : NSObject <NSCopying, NSSecureCoding> {

	long long _state;
	NSArray* _deviceAddresses;

}

@property (nonatomic,readonly) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deviceAddresses;              //@synthesize deviceAddresses=_deviceAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSArray *)deviceAddresses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithState:(long long)arg1 deviceAddresses:(id)arg2 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

