/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AFAccessibilityState : NSObject <NSCopying, NSSecureCoding> {

	long long _isVoiceOverTouchEnabled;
	long long _isVibrationDisabled;

}

@property (nonatomic,readonly) long long isVoiceOverTouchEnabled;              //@synthesize isVoiceOverTouchEnabled=_isVoiceOverTouchEnabled - In the implementation block
@property (nonatomic,readonly) long long isVibrationDisabled;                  //@synthesize isVibrationDisabled=_isVibrationDisabled - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)isVoiceOverTouchEnabled;
-(long long)isVibrationDisabled;
-(id)initWithIsVoiceOverTouchEnabled:(long long)arg1 isVibrationDisabled:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

