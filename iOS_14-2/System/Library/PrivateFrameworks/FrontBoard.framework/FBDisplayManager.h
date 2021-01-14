/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSDisplayMonitor.h>

@class FBSDisplayConfiguration;

@interface FBDisplayManager : FBSDisplayMonitor

@property (nonatomic,copy,readonly) FBSDisplayConfiguration * mainDisplay; 
+(id)sharedInstance;
+(id)mainDisplay;
+(id)mainConfiguration;
+(id)mainIdentity;
-(void)postBookendConnections;
-(id)init;
-(FBSDisplayConfiguration *)mainDisplay;
-(void)invalidate;
-(void)dealloc;
@end

