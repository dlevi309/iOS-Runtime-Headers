/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFObliterationController : NSObject
+(id)sharedInstance;
-(void)_doObliterateWithType:(CFStringRef)arg1 eraseDataPlan:(BOOL)arg2 showingProgress:(BOOL)arg3 options:(id)arg4 ;
-(void)wipeAndBrickShowingProgress:(BOOL)arg1 reason:(id)arg2 ;
-(void)obliterateDataPartitionShowingProgress:(BOOL)arg1 skipDataObliteration:(BOOL)arg2 eraseDataPlan:(BOOL)arg3 reason:(id)arg4 ;
-(void)markObliterationStart;
@end

