/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

