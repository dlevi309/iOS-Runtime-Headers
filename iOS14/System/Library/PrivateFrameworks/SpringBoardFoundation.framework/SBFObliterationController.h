/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

