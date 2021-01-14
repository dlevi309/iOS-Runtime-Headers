/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>
#import <libobjc.A.dylib/INPlayMessageSoundIntentHandling.h>

@class NSString;

@interface IMAssistantMessagePlayMessageSoundHandler : IMAssistantMessageQueryHandler <INPlayMessageSoundIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePlayMessageSound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)playSendSoundForMessageGUID:(id)arg1 ;
@end

