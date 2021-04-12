/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFSpeechRecordingAlertBehavior;

@interface AFSpeechRecordingAlertPolicy : NSObject <NSCopying, NSSecureCoding> {

	AFSpeechRecordingAlertBehavior* _startingAlertBehavior;
	AFSpeechRecordingAlertBehavior* _stoppedAlertBehavior;
	AFSpeechRecordingAlertBehavior* _stoppedWithErrorAlertBehavior;

}

@property (nonatomic,copy,readonly) AFSpeechRecordingAlertBehavior * startingAlertBehavior;                      //@synthesize startingAlertBehavior=_startingAlertBehavior - In the implementation block
@property (nonatomic,copy,readonly) AFSpeechRecordingAlertBehavior * stoppedAlertBehavior;                       //@synthesize stoppedAlertBehavior=_stoppedAlertBehavior - In the implementation block
@property (nonatomic,copy,readonly) AFSpeechRecordingAlertBehavior * stoppedWithErrorAlertBehavior;              //@synthesize stoppedWithErrorAlertBehavior=_stoppedWithErrorAlertBehavior - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(AFSpeechRecordingAlertBehavior *)startingAlertBehavior;
-(AFSpeechRecordingAlertBehavior *)stoppedAlertBehavior;
-(AFSpeechRecordingAlertBehavior *)stoppedWithErrorAlertBehavior;
-(id)initWithStartingAlertBehavior:(id)arg1 stoppedAlertBehavior:(id)arg2 stoppedWithErrorAlertBehavior:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

