/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXActionManager.h>

@protocol SXActionManager <NSObject>
@required
-(void)commitPreviewViewController:(id)arg1;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 mode:(unsigned long long)arg5;
-(id)previewViewControllerForAction:(id)arg1;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2;
-(id)contextMenuConfigurationForAction:(id)arg1;

@end


@protocol SXActionActivityManager, SXActionViewManager;
@class SXActionManagerPreview, NSString;

@interface SXActionManager : NSObject <SXActionManager> {

	id<SXActionActivityManager> _activityManager;
	id<SXActionViewManager> _viewManager;
	SXActionManagerPreview* _currentPreview;

}

@property (nonatomic,readonly) id<SXActionActivityManager> activityManager;              //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,readonly) id<SXActionViewManager> viewManager;                      //@synthesize viewManager=_viewManager - In the implementation block
@property (nonatomic,retain) SXActionManagerPreview * currentPreview;                    //@synthesize currentPreview=_currentPreview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commitPreviewViewController:(id)arg1 ;
-(id<SXActionActivityManager>)activityManager;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 mode:(unsigned long long)arg5 ;
-(id)previewViewControllerForAction:(id)arg1 ;
-(id<SXActionViewManager>)viewManager;
-(void)notifyPostActionHandlers:(id)arg1 action:(id)arg2 state:(unsigned long long)arg3 ;
-(void)setCurrentPreview:(SXActionManagerPreview *)arg1 ;
-(SXActionManagerPreview *)currentPreview;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 ;
-(id)contextMenuConfigurationForAction:(id)arg1 ;
-(id)initWithActionActivityManager:(id)arg1 viewManager:(id)arg2 ;
@end

