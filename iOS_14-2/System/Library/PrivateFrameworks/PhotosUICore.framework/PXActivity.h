/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/PXActivity.h>

@protocol PXActivity <NSObject>
@property (assign,nonatomic,__weak) id<PXActivityItemSourceController> itemSourceController; 
@required
-(id<PXActivityItemSourceController>)itemSourceController;
-(void)setItemSourceController:(id)arg1;

@end


@protocol PXActivityItemSourceController, PXActivityActionDelegate, PXActivityDataSource;
@class UIImage, NSString;

@interface PXActivity : UIActivity <PXActivity> {

	SCD_Struct_PX59 _dataSourceFlags;
	UIImage* _cachedCustomImage;
	UIImage* _cachedSmallCustomImage;
	NSString* _internalActivityType;
	id<PXActivityItemSourceController> _itemSourceController;
	NSString* _actionTitle;
	NSString* _actionType;
	NSString* _systemImageName;
	/*^block*/id _performActivityActionHandler;
	/*^block*/id _canPerformActivityActionHandler;
	id<PXActivityActionDelegate> _actionDelegate;
	id<PXActivityDataSource> _dataSource;

}

@property (nonatomic,copy) NSString * actionTitle;                                                        //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) NSString * actionType;                                                         //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * systemImageName;                                                    //@synthesize systemImageName=_systemImageName - In the implementation block
@property (nonatomic,copy) id performActivityActionHandler;                                               //@synthesize performActivityActionHandler=_performActivityActionHandler - In the implementation block
@property (nonatomic,copy) id canPerformActivityActionHandler;                                            //@synthesize canPerformActivityActionHandler=_canPerformActivityActionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<PXActivityActionDelegate> actionDelegate;                          //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXActivityDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXActivityItemSourceController> itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activityWithActionTitle:(id)arg1 actionType:(id)arg2 activityType:(id)arg3 systemImageName:(id)arg4 ;
+(id)_destructiveActivities;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)activityType;
-(void)performActivity;
-(id<PXActivityActionDelegate>)actionDelegate;
-(void)setActionTitle:(NSString *)arg1 ;
-(id<PXActivityDataSource>)dataSource;
-(NSString *)actionTitle;
-(void)setSystemImageName:(NSString *)arg1 ;
-(id)performActivityActionHandler;
-(void)setPerformActivityActionHandler:(id)arg1 ;
-(id)canPerformActivityActionHandler;
-(void)setCanPerformActivityActionHandler:(id)arg1 ;
-(NSString *)description;
-(void)setDataSource:(id<PXActivityDataSource>)arg1 ;
-(void)setActionDelegate:(id<PXActivityActionDelegate>)arg1 ;
-(id)px_activityImageNamed:(id)arg1 ;
-(id)initWithActionTitle:(id)arg1 actionType:(id)arg2 activityType:(id)arg3 systemImageName:(id)arg4 ;
-(id)px_activitySettingsImageNamed:(id)arg1 ;
-(id)_systemImageName;
-(id<PXActivityItemSourceController>)itemSourceController;
-(void)setItemSourceController:(id<PXActivityItemSourceController>)arg1 ;
-(void)updateActivityViewControllerVisibleShareActions;
-(void)tearDownForCompletion;
-(id)createActivityBundleImageConfigurationForBundle:(id)arg1 imageNamed:(id)arg2 activityCategory:(long long)arg3 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(NSString *)systemImageName;
@end

