/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/INCLocalExtending.h>
#import <libobjc.A.dylib/INIntentHandlerProviding.h>

@class NSString;

@interface WFBundledIntentHandlerProvider : NSObject <INCLocalExtending, INIntentHandlerProviding>

@property (nonatomic,readonly) NSString * localExtensionIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)localIntentHandlerLaunchID;
-(id)init;
-(id)handlerForIntent:(id)arg1 ;
-(NSString *)localExtensionIdentifier;
@end

