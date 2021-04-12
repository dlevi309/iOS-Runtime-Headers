/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <ShareSheet/UIActivityItemProvider.h>

@protocol PMActivityItemProviderDelegate, MiroPreventDismissalDelegate, OS_dispatch_semaphore;
@class VEKProduction, MiroMovie, LPLinkMetadata, PHActivityProgressViewController, UIViewController, NSString, NSObject, VEKResult;

@interface PMActivityItemProvider : UIActivityItemProvider {

	BOOL _debugDisableProgressUpdates;
	BOOL _userCancelled;
	id<PMActivityItemProviderDelegate> _delegate;
	id<MiroPreventDismissalDelegate> _preventDismissalDelegate;
	VEKProduction* _production;
	MiroMovie* _miroMovie;
	double _exportAspect;
	LPLinkMetadata* _shareHeaderMetadata;
	PHActivityProgressViewController* _progressController;
	UIViewController* _progressPresenterViewController;
	NSString* _preset;
	NSString* _exportedFilePath;
	double _progress;
	NSObject*<OS_dispatch_semaphore> _readyToReturnItem;
	VEKResult* _result;
	NSString* _shareMetadataSummary;
	NSString* _shareMetadataTitle;

}

@property (nonatomic,retain) VEKProduction * production;                                                    //@synthesize production=_production - In the implementation block
@property (nonatomic,retain) PHActivityProgressViewController * progressController;                         //@synthesize progressController=_progressController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * progressPresenterViewController;                     //@synthesize progressPresenterViewController=_progressPresenterViewController - In the implementation block
@property (nonatomic,retain) NSString * preset;                                                             //@synthesize preset=_preset - In the implementation block
@property (nonatomic,retain) NSString * exportedFilePath;                                                   //@synthesize exportedFilePath=_exportedFilePath - In the implementation block
@property (assign,nonatomic) double progress;                                                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL userCancelled;                                                            //@synthesize userCancelled=_userCancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> readyToReturnItem;                            //@synthesize readyToReturnItem=_readyToReturnItem - In the implementation block
@property (nonatomic,retain) VEKResult * result;                                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSString * shareMetadataSummary;                                               //@synthesize shareMetadataSummary=_shareMetadataSummary - In the implementation block
@property (nonatomic,retain) NSString * shareMetadataTitle;                                                 //@synthesize shareMetadataTitle=_shareMetadataTitle - In the implementation block
@property (assign,nonatomic,__weak) id<PMActivityItemProviderDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MiroPreventDismissalDelegate> preventDismissalDelegate;              //@synthesize preventDismissalDelegate=_preventDismissalDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presenter; 
@property (nonatomic,retain) MiroMovie * miroMovie;                                                         //@synthesize miroMovie=_miroMovie - In the implementation block
@property (assign,nonatomic) double exportAspect;                                                           //@synthesize exportAspect=_exportAspect - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * shareHeaderMetadata;                                          //@synthesize shareHeaderMetadata=_shareHeaderMetadata - In the implementation block
-(id<PMActivityItemProviderDelegate>)delegate;
-(void)setDelegate:(id<PMActivityItemProviderDelegate>)arg1 ;
-(id)item;
-(VEKResult *)result;
-(double)progress;
-(void)setResult:(VEKResult *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(UIViewController *)presenter;
-(void)cancelExport;
-(void)setPreset:(NSString *)arg1 ;
-(NSString *)preset;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(void)setPresenter:(UIViewController *)arg1 ;
-(PHActivityProgressViewController *)progressController;
-(void)setProgressController:(PHActivityProgressViewController *)arg1 ;
-(id)_stringFromTimeInterval:(double)arg1 ;
-(BOOL)userCancelled;
-(void)setUserCancelled:(BOOL)arg1 ;
-(double)exportAspect;
-(void)setExportAspect:(double)arg1 ;
-(LPLinkMetadata *)shareHeaderMetadata;
-(void)setShareHeaderMetadata:(LPLinkMetadata *)arg1 ;
-(NSString *)shareMetadataTitle;
-(void)setShareMetadataTitle:(NSString *)arg1 ;
-(NSString *)shareMetadataSummary;
-(void)setShareMetadataSummary:(NSString *)arg1 ;
-(id<MiroPreventDismissalDelegate>)preventDismissalDelegate;
-(void)_unloadVEKObjects;
-(MiroMovie *)miroMovie;
-(void)setReadyToReturnItem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)beginExport;
-(NSObject*<OS_dispatch_semaphore>)readyToReturnItem;
-(NSString *)exportedFilePath;
-(void)setProgressPresenterViewController:(UIViewController *)arg1 ;
-(UIViewController *)progressPresenterViewController;
-(void)setExportedFilePath:(NSString *)arg1 ;
-(id)initWithProduction:(id)arg1 result:(id)arg2 ;
-(void)setPreventDismissalDelegate:(id<MiroPreventDismissalDelegate>)arg1 ;
-(void)setMiroMovie:(MiroMovie *)arg1 ;
@end

