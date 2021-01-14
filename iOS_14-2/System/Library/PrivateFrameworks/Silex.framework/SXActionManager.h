/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXActionManager.h>

@protocol SXActionManager <NSObject>
@required
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 mode:(unsigned long long)arg5;
-(id)previewViewControllerForAction:(id)arg1;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2;
-(void)commitPreviewViewController:(id)arg1;
-(id)contextMenuConfigurationForAction:(id)arg1;

@end


@protocol SXActionActivityManager, SXActionViewManager, SXPostActionHandlerManager;
@class SXActionManagerPreview, NSString;

@interface SXActionManager : NSObject <SXActionManager> {

	id<SXActionActivityManager> _activityManager;
	id<SXActionViewManager> _viewManager;
	SXActionManagerPreview* _currentPreview;
	id<SXPostActionHandlerManager> _postActionHandlerManager;

}

@property (nonatomic,readonly) id<SXActionActivityManager> activityManager;                          //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,readonly) id<SXActionViewManager> viewManager;                                  //@synthesize viewManager=_viewManager - In the implementation block
@property (nonatomic,retain) SXActionManagerPreview * currentPreview;                                //@synthesize currentPreview=_currentPreview - In the implementation block
@property (nonatomic,readonly) id<SXPostActionHandlerManager> postActionHandlerManager;              //@synthesize postActionHandlerManager=_postActionHandlerManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXActionActivityManager>)activityManager;
-(id)initWithActionActivityManager:(id)arg1 viewManager:(id)arg2 postActionHandlerManager:(id)arg3 ;
-(void)notifyPostActionHandlers:(id)arg1 action:(id)arg2 state:(unsigned long long)arg3 ;
-(void)setCurrentPreview:(SXActionManagerPreview *)arg1 ;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 mode:(unsigned long long)arg5 ;
-(id<SXPostActionHandlerManager>)postActionHandlerManager;
-(id)previewViewControllerForAction:(id)arg1 ;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(id<SXActionViewManager>)viewManager;
-(SXActionManagerPreview *)currentPreview;
-(id)contextMenuConfigurationForAction:(id)arg1 ;
@end

