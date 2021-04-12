/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithShowUIDuringListening:(BOOL)arg1 playAlertBeforeListening:(BOOL)arg2 ;
-(void)setTriggerlessListeningOptions:(AFTriggerlessListeningOptions *)arg1 ;
-(AFTriggerlessListeningOptions *)triggerlessListeningOptions;
@end

