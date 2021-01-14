/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class RLMRealm;


@protocol RLMThreadConfined <NSObject>
@property (nonatomic,readonly) RLMRealm * realm; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(RLMRealm *)realm;
-(BOOL)isInvalidated;

@end

