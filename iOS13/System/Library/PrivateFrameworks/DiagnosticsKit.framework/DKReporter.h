/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

@class DKComponentIdentity;


@protocol DKReporter <NSObject>
@property (nonatomic,readonly) DKComponentIdentity * componentIdentity; 
@optional
-(void)teardown;

@required
-(BOOL)isPresent;
-(void)setupWithContext:(id)arg1;
-(void)populateAttributes:(id)arg1;
-(DKComponentIdentity *)componentIdentity;

@end

