/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXUserInterfaceElementEventTracker.h>
#import <libobjc.A.dylib/PXPhotosDetailsAssetsWidgetEventTracker.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSString;

@interface _PXPhotosDetailsAssetsWidgetEventTracker : PXUserInterfaceElementEventTracker <PXPhotosDetailsAssetsWidgetEventTracker, PXChangeObserver> {

	BOOL _isDisplayingCuratedContent;
	NSString* _visibleState;
	long long _visibleStateSignpost;

}

@property (nonatomic,retain) NSString * visibleState;                      //@synthesize visibleState=_visibleState - In the implementation block
@property (assign,nonatomic) long long visibleStateSignpost;               //@synthesize visibleStateSignpost=_visibleStateSignpost - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingCuratedContent;              //@synthesize isDisplayingCuratedContent=_isDisplayingCuratedContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)logContentViewWillAppear;
-(void)logContentViewDidDisappear;
-(BOOL)isDisplayingCuratedContent;
-(void)setIsDisplayingCuratedContent:(BOOL)arg1 ;
-(void)_invalidateVisibleState;
-(void)_updateVisibleState;
-(void)setVisibleState:(NSString *)arg1 ;
-(void)_logDidStartViewingState:(id)arg1 ;
-(void)_logDidEndViewingState:(id)arg1 ;
-(NSString *)visibleState;
-(long long)visibleStateSignpost;
-(void)setVisibleStateSignpost:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

