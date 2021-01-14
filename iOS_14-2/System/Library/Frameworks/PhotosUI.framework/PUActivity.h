/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/PUActivity.h>
@class PUActivityItemSourceController;


@protocol PUActivity <NSObject>
@property (assign,nonatomic,__weak) PUActivityItemSourceController * itemSourceController; 
@required
-(PUActivityItemSourceController *)itemSourceController;
-(void)setItemSourceController:(id)arg1;

@end


@protocol PUActivityDataSource;
@class PUActivityItemSourceController, UIImage, NSString;

@interface PUActivity : UIActivity <PUActivity> {

	struct {
		BOOL respondsToActivityViewControllerForActivity;
		BOOL respondsToActivityItemsForActivity;
	}  _dataSourceFlags;
	UIImage* _cachedCustomImage;
	UIImage* _cachedSmallCustomImage;
	PUActivityItemSourceController* _itemSourceController;
	id<PUActivityDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<PUActivityDataSource> dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) PUActivityItemSourceController * itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PUActivityDataSource>)dataSource;
-(void)setDataSource:(id<PUActivityDataSource>)arg1 ;
-(PUActivityItemSourceController *)itemSourceController;
-(void)setItemSourceController:(PUActivityItemSourceController *)arg1 ;
-(id)pu_activityImageNamed:(id)arg1 ;
-(id)pu_activitySettingsImageNamed:(id)arg1 ;
-(void)updateActivityViewControllerVisibleShareActions;
-(void)tearDownForCompletion;
-(id)createActivityBundleImageConfigurationForBundle:(id)arg1 imageNamed:(id)arg2 activityCategory:(long long)arg3 ;
@end

