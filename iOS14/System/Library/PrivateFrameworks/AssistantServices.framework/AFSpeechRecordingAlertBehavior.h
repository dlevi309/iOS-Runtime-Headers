/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AFSpeechRecordingAlertBehavior : NSObject <NSCopying, NSSecureCoding> {

	long long _style;
	long long _beepSoundID;

}

@property (nonatomic,readonly) long long style;                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long beepSoundID;              //@synthesize beepSoundID=_beepSoundID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(long long)beepSoundID;
-(id)initWithStyle:(long long)arg1 beepSoundID:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

