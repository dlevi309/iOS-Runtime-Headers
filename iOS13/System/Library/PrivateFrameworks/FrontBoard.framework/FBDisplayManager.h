/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSDisplayMonitor.h>

@class FBSDisplayConfiguration;

@interface FBDisplayManager : FBSDisplayMonitor

@property (nonatomic,copy,readonly) FBSDisplayConfiguration * mainDisplay; 
+(id)sharedInstance;
+(id)mainDisplay;
+(id)mainIdentity;
+(id)mainConfiguration;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(FBSDisplayConfiguration *)mainDisplay;
-(void)postBookendConnections;
@end

