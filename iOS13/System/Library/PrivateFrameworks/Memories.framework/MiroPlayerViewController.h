/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIViewController.h>

@protocol MemoryOwner;
@interface MiroPlayerViewController : UIViewController {

	id<MemoryOwner> _memoryOwnerDelegate;

}

@property (nonatomic,retain) id<MemoryOwner> memoryOwnerDelegate;              //@synthesize memoryOwnerDelegate=_memoryOwnerDelegate - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(void)warnTooManyLiveCompositors:(id)arg1 ;
-(id<MemoryOwner>)memoryOwnerDelegate;
-(void)setMemoryOwnerDelegate:(id<MemoryOwner>)arg1 ;
@end

