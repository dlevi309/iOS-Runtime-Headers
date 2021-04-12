/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIStateRestoring.h>
#import <UIKit/UIViewControllerRestoration.h>

@class MPUDataSource, MPUQueryDataSource, NSString;

@interface MPUDataSourceViewController : UIViewController <UIStateRestoring, UIViewControllerRestoration> {

	BOOL _hasEverReloadedData;
	BOOL _visible;
	BOOL _shouldReloadWhenVisible;
	MPUDataSource* _dataSource;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;                         //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL shouldReloadWhenVisible;                          //@synthesize shouldReloadWhenVisible=_shouldReloadWhenVisible - In the implementation block
@property (nonatomic,retain) MPUDataSource * dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) MPUQueryDataSource * queryDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)dealloc;
-(id)initWithDataSource:(id)arg1 ;
-(MPUDataSource *)dataSource;
-(void)setDataSource:(MPUDataSource *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadData;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_setDataSource:(id)arg1 shouldReloadData:(BOOL)arg2 ;
-(BOOL)shouldReloadWhenVisible;
-(void)setShouldReloadWhenVisible:(BOOL)arg1 ;
-(void)dataSourceWillInvalidate;
-(void)dataSourceDidInvalidate;
-(void)_MPUStandardViewController_dataSourceWillInvalidateNotification:(id)arg1 ;
-(void)_MPUStandardViewController_dataSourceDidInvalidateNotification:(id)arg1 ;
-(MPUQueryDataSource *)queryDataSource;
@end

