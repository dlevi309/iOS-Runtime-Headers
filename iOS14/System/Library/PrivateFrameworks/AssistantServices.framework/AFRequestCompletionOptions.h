/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying> {

	AFTriggerlessListeningOptions* _triggerlessListeningOptions;

}

@property (nonatomic,copy) AFTriggerlessListeningOptions * triggerlessListeningOptions;              //@synthesize triggerlessListeningOptions=_triggerlessListeningOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setTriggerlessListeningOptions:(AFTriggerlessListeningOptions *)arg1 ;
-(AFTriggerlessListeningOptions *)triggerlessListeningOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithShowUIDuringListening:(BOOL)arg1 playAlertBeforeListening:(BOOL)arg2 ;
@end

