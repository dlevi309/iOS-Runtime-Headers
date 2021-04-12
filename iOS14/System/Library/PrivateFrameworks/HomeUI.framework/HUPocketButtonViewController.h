/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)descriptors;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithButtonDescriptors:(id)arg1 ;
-(void)_buttonHit:(id)arg1 ;
@end

