/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol ProjectDelegate
@required
-(BOOL)isInCloud;
-(void)coordinateMove:(/*^block*/id)arg1;
-(void)coordinateRenameFrom:(id)arg1 to:(id)arg2 renameHandler:(/*^block*/id)arg3;
-(void)coordinateWrite:(/*^block*/id)arg1;
-(void)projectWasSaved:(id)arg1;
-(void)projectWasChanged:(id)arg1;
-(void)projectDidInvalidateSharingInfo:(id)arg1;
-(id)thumbnailImageForProject:(id)arg1;
-(void)coordinateRemove:(/*^block*/id)arg1;

@end

