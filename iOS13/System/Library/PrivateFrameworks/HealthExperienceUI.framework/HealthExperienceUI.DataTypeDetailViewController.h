/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI.CompoundDataSourceCollectionViewController.h>
#import <UIKit/UIViewControllerRestoration.h>

@class NSString;

@interface HealthExperienceUI.DataTypeDetailViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <UIViewControllerRestoration> {

	 chartContext;
	 $__lazy_storage_$_personalizedFeedTrainer;

}

@property (readonly,nonatomic) NSString * description; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(NSString *)description;
-(void)addDataTapped:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
@end

