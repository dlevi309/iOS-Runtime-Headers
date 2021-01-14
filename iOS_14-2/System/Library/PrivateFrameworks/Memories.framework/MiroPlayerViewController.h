/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIViewController.h>

@protocol MemoryOwner;
@interface MiroPlayerViewController : UIViewController {

	id<MemoryOwner> _memoryOwnerDelegate;

}

@property (nonatomic,retain) id<MemoryOwner> memoryOwnerDelegate;              //@synthesize memoryOwnerDelegate=_memoryOwnerDelegate - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)dealloc;
-(void)warnTooManyLiveCompositors:(id)arg1 ;
-(id<MemoryOwner>)memoryOwnerDelegate;
-(void)setMemoryOwnerDelegate:(id<MemoryOwner>)arg1 ;
@end

