/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGestureProvider.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, UILongPressGestureRecognizer, PXForYouSuggestionAssetsDataSourceManager, NSString;

@interface PXForYouSuggestionOneupGestureProvider : PXGestureProvider <UIGestureRecognizerDelegate> {

	NSArray* _gestureRecognizers;
	UILongPressGestureRecognizer* _longPressRecognizer;
	PXForYouSuggestionAssetsDataSourceManager* _dataSourceManager;

}

@property (nonatomic,readonly) PXForYouSuggestionAssetsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(PXForYouSuggestionAssetsDataSourceManager *)dataSourceManager;
-(void)_startShowingOriginal;
-(void)_createGestureRecognizersIfNeeded;
-(void)_stopShowingOriginal;
-(id)gestureRecognizers;
-(void)hostingViewDidChange;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

