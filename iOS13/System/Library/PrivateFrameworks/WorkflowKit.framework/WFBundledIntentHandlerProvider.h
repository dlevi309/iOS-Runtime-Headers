/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/INCLocalExtending.h>
#import <libobjc.A.dylib/INIntentHandlerProviding.h>

@class NSString;

@interface WFBundledIntentHandlerProvider : NSObject <INCLocalExtending, INIntentHandlerProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localExtensionIdentifier; 
+(id)sharedInstance;
+(id)localIntentHandlerLaunchID;
-(id)init;
-(id)handlerForIntent:(id)arg1 ;
-(NSString *)localExtensionIdentifier;
@end

