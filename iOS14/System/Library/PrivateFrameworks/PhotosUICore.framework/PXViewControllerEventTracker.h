/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXUserInterfaceElementEventTracker.h>
#import <libobjc.A.dylib/PXViewControllerEventTracker.h>

@protocol PXViewControllerEventTracker <PXUserInterfaceElementEventTracker>
@required
-(void)logViewControllerDidDisappear:(id)arg1;
-(void)logViewControllerDidAppear:(id)arg1;

@end

#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXAnonymousViewController;
@class NSString, NSObject, NSMutableDictionary;

@interface PXViewControllerEventTracker : PXUserInterfaceElementEventTracker <PXViewControllerEventTracker, PXChangeObserver> {

	BOOL _isViewVisible;
	NSString* _viewName;
	NSObject*<PXAnonymousViewController> _currentViewController;
	long long _viewSignpost;

}

@property (assign,nonatomic,__weak) NSObject*<PXAnonymousViewController> currentViewController;              //@synthesize currentViewController=_currentViewController - In the implementation block
@property (assign,nonatomic) long long viewSignpost;                                                         //@synthesize viewSignpost=_viewSignpost - In the implementation block
@property (nonatomic,readonly) NSString * viewName;                                                          //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,readonly) BOOL isViewVisible;                                                           //@synthesize isViewVisible=_isViewVisible - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * payload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)logViewControllerDidDisappear:(id)arg1 ;
-(void)logViewControllerDidAppear:(id)arg1 ;
-(id)initWithViewName:(id)arg1 ;
-(NSString *)viewName;
-(void)didPerformChanges;
-(void)setIsViewVisible:(BOOL)arg1 ;
-(void)_invalidateIsViewVisible;
-(void)_updateIsViewVisible;
-(long long)viewSignpost;
-(void)setViewSignpost:(long long)arg1 ;
-(BOOL)isViewVisible;
-(NSObject*<PXAnonymousViewController>)currentViewController;
-(void)setCurrentViewController:(NSObject*<PXAnonymousViewController>)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

