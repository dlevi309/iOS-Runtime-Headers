/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class NSTimer, FBWorkspaceEventQueueLock, NSString;

@interface SBBlockWorkspaceQueueTestRecipe : NSObject <SBTestRecipe> {

	NSTimer* _blockTimer;
	FBWorkspaceEventQueueLock* _queueLock;

}

@property (nonatomic,retain) NSTimer * blockTimer;                               //@synthesize blockTimer=_blockTimer - In the implementation block
@property (nonatomic,retain) FBWorkspaceEventQueueLock * queueLock;              //@synthesize queueLock=_queueLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)title;
-(FBWorkspaceEventQueueLock *)queueLock;
-(void)setQueueLock:(FBWorkspaceEventQueueLock *)arg1 ;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(NSTimer *)blockTimer;
-(void)blockTimerDidFire:(id)arg1 ;
-(void)setBlockTimer:(NSTimer *)arg1 ;
@end

