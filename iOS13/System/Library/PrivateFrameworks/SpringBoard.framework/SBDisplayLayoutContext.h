/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class FBSDisplayIdentity, SBLayoutState;


@protocol SBDisplayLayoutContext <NSObject>
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,readonly) SBLayoutState * layoutState; 
@required
-(SBLayoutState *)layoutState;
-(FBSDisplayIdentity *)displayIdentity;

@end

