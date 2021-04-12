/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface HUPocketButtonViewController : UIViewController {

	NSArray* _descriptors;

}

@property (nonatomic,copy,readonly) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
+(CGSize)calculatePreferredContentSizeForDescriptors:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(NSArray *)descriptors;
-(id)initWithButtonDescriptors:(id)arg1 ;
-(void)_buttonHit:(id)arg1 ;
@end

