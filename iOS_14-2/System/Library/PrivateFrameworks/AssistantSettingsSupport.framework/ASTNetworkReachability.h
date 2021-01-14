/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/


#import <AssistantSettingsSupport/AssistantSettingsSupport-Structs.h>
@interface ASTNetworkReachability : NSObject
+(SCNetworkReachabilityRef)createReachabilityForVoiceDownload;
+(BOOL)reachabilityHasNetworkConnection:(SCNetworkReachabilityRef)arg1 ;
+(BOOL)reachabilityHasNonWWANNetworkConnection:(SCNetworkReachabilityRef)arg1 ;
+(BOOL)hasNetworkConnection;
+(BOOL)hasNonWWANNetworkConnection;
@end

