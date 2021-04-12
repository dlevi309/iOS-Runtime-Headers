/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVTStickerPagingControllerDelegate.h>
#import <libobjc.A.dylib/AVTStickerPagingControllerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarPickerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarRecordDataSourceObserver.h>
#import <libobjc.A.dylib/AVTPresenterDelegate.h>
#import <libobjc.A.dylib/AVTPaddleViewDelegate.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>

@protocol AVTPresenterDelegate, AVTStickerDisclosureValidationDelegate, AVTAvatarStore, AVTUILogger;
@class AVTAvatarRecordDataSource, AVTUIEnvironment, AVTAvatarPickerDataSource, AVTSimpleAvatarPicker, AVTStickerPagingController, NSString, AVTPaddleView, UIView;

@interface AVTStickerViewController : UIViewController <AVTStickerPagingControllerDelegate, AVTStickerPagingControllerDelegate, AVTAvatarPickerDelegate, AVTAvatarRecordDataSourceObserver, AVTPresenterDelegate, AVTPaddleViewDelegate, AVTObjectViewController> {

	BOOL _allowEditing;
	BOOL _allowPeel;
	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
	id<AVTAvatarStore> _store;
	AVTAvatarRecordDataSource* _recordDataSource;
	AVTUIEnvironment* _environment;
	id<AVTUILogger> _logger;
	AVTAvatarPickerDataSource* _avatarPickerDataSource;
	AVTSimpleAvatarPicker* _avatarPicker;
	AVTStickerPagingController* _pagingController;
	NSString* _selectedRecordIdentifier;
	AVTPaddleView* _paddleView;

}

@property (nonatomic,readonly) id<AVTAvatarStore> store;                                                                  //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecordDataSource * recordDataSource;                                              //@synthesize recordDataSource=_recordDataSource - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                                    //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) BOOL allowEditing;                                                                         //@synthesize allowEditing=_allowEditing - In the implementation block
@property (nonatomic,readonly) BOOL allowPeel;                                                                            //@synthesize allowPeel=_allowPeel - In the implementation block
@property (nonatomic,retain) AVTAvatarPickerDataSource * avatarPickerDataSource;                                          //@synthesize avatarPickerDataSource=_avatarPickerDataSource - In the implementation block
@property (nonatomic,retain) AVTSimpleAvatarPicker * avatarPicker;                                                        //@synthesize avatarPicker=_avatarPicker - In the implementation block
@property (nonatomic,retain) AVTStickerPagingController * pagingController;                                               //@synthesize pagingController=_pagingController - In the implementation block
@property (nonatomic,retain) NSString * selectedRecordIdentifier;                                                         //@synthesize selectedRecordIdentifier=_selectedRecordIdentifier - In the implementation block
@property (nonatomic,retain) AVTPaddleView * paddleView;                                                                  //@synthesize paddleView=_paddleView - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;              //@synthesize disclosureValidationDelegate=_disclosureValidationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
+(unsigned long long)minimumNumberOfVisibleItemForWidth:(double)arg1 ;
+(id)inUseStickerPack;
+(id)stickersAvatarsFetchRequest;
+(double)headerHeightForWidth:(double)arg1 interitemSpacing:(double)arg2 ;
+(id)stickerViewControllerForStore:(id)arg1 allowEditing:(BOOL)arg2 allowPeel:(BOOL)arg3 ;
-(AVTUIEnvironment *)environment;
-(id<AVTAvatarStore>)store;
-(id<AVTUILogger>)logger;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(void)updateHeaderSize;
-(BOOL)allowEditing;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
-(void)avatarPicker:(id)arg1 didSelectAvatarRecord:(id)arg2 ;
-(void)presentAvatarUIController:(id)arg1 animated:(BOOL)arg2 ;
-(void)stickerPagingController:(id)arg1 pageDidScrollToOffset:(CGPoint)arg2 ;
-(void)dismissAvatarUIControllerAnimated:(BOOL)arg1 ;
-(void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)significantRecordChangeInDataSource:(id)arg1 ;
-(AVTAvatarRecordDataSource *)recordDataSource;
-(void)avatarPickerDidEndCameraSession:(id)arg1 ;
-(void)avatarPickerWillStartCameraSession:(id)arg1 ;
-(void)paddleViewTapped:(id)arg1 ;
-(void)paddleViewWantsToBeDismissed:(id)arg1 ;
-(void)presentMemojiEditorForCreation;
-(id)initWithStore:(id)arg1 selectedRecordIdentifier:(id)arg2 allowEditing:(BOOL)arg3 allowPeel:(BOOL)arg4 environment:(id)arg5 ;
-(void)setAvatarPickerDataSource:(AVTAvatarPickerDataSource *)arg1 ;
-(AVTAvatarPickerDataSource *)avatarPickerDataSource;
-(BOOL)allowPeel;
-(void)setPagingController:(AVTStickerPagingController *)arg1 ;
-(void)setAvatarPicker:(AVTSimpleAvatarPicker *)arg1 ;
-(void)updatePagingControllerInsets;
-(AVTPaddleView *)paddleView;
-(BOOL)shouldPresentPaddleView;
-(void)selectAvatarRecordAtIndex:(long long)arg1 hideHeader:(BOOL)arg2 ;
-(void)selectDefaultAvatarIfNeeded;
-(void)presentPaddleViewIfNeeded;
-(AVTSimpleAvatarPicker *)avatarPicker;
-(AVTStickerPagingController *)pagingController;
-(void)updateHeaderPositionWithContentOffset:(CGPoint)arg1 ;
-(void)updatePaddleViewLayoutIfNecessary;
-(NSString *)selectedRecordIdentifier;
-(void)selectRecordForIdentifier:(id)arg1 ;
-(void)updateScrollToShowAvatarPicker:(BOOL)arg1 ;
-(void)setSelectedRecordIdentifier:(NSString *)arg1 ;
-(double)headerMaxY;
-(void)reloadPickerView;
-(BOOL)allowAvatarCreation;
-(void)setPaddleView:(AVTPaddleView *)arg1 ;
-(void)dismissPaddleViewIfNecessary;
-(void)stickerControllerDidEnterBackground;
-(void)stickerControllerWillEnterForeground;
-(void)editCurrentMemoji;
-(void)swipeRightWithDelay:(long long)arg1 forCompletionHandler:(/*^block*/id)arg2 ;
-(void)swipeLeftWithDelay:(long long)arg1 forCompletionHandler:(/*^block*/id)arg2 ;
@end

