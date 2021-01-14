/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(FBWorkspaceEventQueueLock *)queueLock;
-(void)setQueueLock:(FBWorkspaceEventQueueLock *)arg1 ;
-(NSTimer *)blockTimer;
-(void)blockTimerDidFire:(id)arg1 ;
-(void)setBlockTimer:(NSTimer *)arg1 ;
@end

