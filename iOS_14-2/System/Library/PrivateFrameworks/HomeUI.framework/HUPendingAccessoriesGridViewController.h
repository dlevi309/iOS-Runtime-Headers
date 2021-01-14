/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@class NSString;

@interface HUPendingAccessoriesGridViewController : HUServiceGridViewController <HFItemManagerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(id)initWithUser:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(void)viewDidLoad;
-(id)layoutOptionsForSection:(long long)arg1 ;
@end

