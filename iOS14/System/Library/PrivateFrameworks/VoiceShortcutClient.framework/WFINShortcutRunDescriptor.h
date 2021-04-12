/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/WFWorkflowRunDescriptor.h>

@class INShortcut;

@interface WFINShortcutRunDescriptor : WFWorkflowRunDescriptor {

	INShortcut* _shortcut;

}

@property (nonatomic,readonly) INShortcut * shortcut;              //@synthesize shortcut=_shortcut - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithShortcut:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(INShortcut *)shortcut;
-(id)initWithCoder:(id)arg1 ;
@end

