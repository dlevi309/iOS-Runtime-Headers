/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewCell.h>

@class PHMemory;

@interface PXDebugMemoryGeneratorsViewControllerCell : UITableViewCell {

	PHMemory* _memory;

}

@property (retain) PHMemory * memory;              //@synthesize memory=_memory - In the implementation block
-(PHMemory *)memory;
-(void)persist:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setMemory:(PHMemory *)arg1 ;
@end

