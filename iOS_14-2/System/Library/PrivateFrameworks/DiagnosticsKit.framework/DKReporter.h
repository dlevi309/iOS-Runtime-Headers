/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

