/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class FBSDisplayIdentity, SBLayoutState;


@protocol SBDisplayLayoutContext <NSObject>
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,readonly) SBLayoutState * layoutState; 
@required
-(FBSDisplayIdentity *)displayIdentity;
-(SBLayoutState *)layoutState;

@end

