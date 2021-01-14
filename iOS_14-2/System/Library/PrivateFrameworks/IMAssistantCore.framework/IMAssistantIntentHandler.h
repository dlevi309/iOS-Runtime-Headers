/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <Intents/_INExtension.h>

@class NSMutableArray;

@interface IMAssistantIntentHandler : _INExtension {

	NSMutableArray* _recentIntentHandlers;

}
-(id)init;
-(id)handlerForIntent:(id)arg1 ;
-(id)existingHandlerForIntentIdentifier:(id)arg1 ;
-(void)updateRecentlyUsedHandlersWithHandler:(id)arg1 ;
@end

