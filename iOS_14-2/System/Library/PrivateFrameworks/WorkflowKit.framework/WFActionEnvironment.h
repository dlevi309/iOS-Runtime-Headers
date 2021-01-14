/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@interface WFActionEnvironment : NSObject

@property (nonatomic,readonly) BOOL isWatchOS; 
@property (nonatomic,readonly) BOOL isAppExtension; 
+(id)currentEnvironment;
+(id)environmentForWorkflowType:(id)arg1 ;
-(BOOL)isAppExtension;
-(BOOL)isWatchOS;
@end

