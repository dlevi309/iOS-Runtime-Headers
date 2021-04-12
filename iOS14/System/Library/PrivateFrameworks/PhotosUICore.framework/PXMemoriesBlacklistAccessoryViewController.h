/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIView, PXMemoriesBlacklistAccessoryViewSpec, NSArray;

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController {

	UIView* _accessoryView;
	PXMemoriesBlacklistAccessoryViewSpec* _viewSpec;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIView * accessoryView;                                       //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) PXMemoriesBlacklistAccessoryViewSpec * viewSpec;              //@synthesize viewSpec=_viewSpec - In the implementation block
@property (setter=_setConstraints:,nonatomic,copy) NSArray * constraints;                  //@synthesize constraints=_constraints - In the implementation block
-(void)updateViewConstraints;
-(void)_setConstraints:(id)arg1 ;
-(NSArray *)constraints;
-(id)initWithAccessoryView:(id)arg1 viewSpec:(id)arg2 ;
-(void)setViewSpec:(PXMemoriesBlacklistAccessoryViewSpec *)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(CGSize)preferredContentSize;
-(void)didReceiveMemoryWarning;
-(PXMemoriesBlacklistAccessoryViewSpec *)viewSpec;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

