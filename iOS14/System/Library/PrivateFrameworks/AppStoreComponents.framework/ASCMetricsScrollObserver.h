/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/_UIScrollViewScrollObserver.h>

@class UIScrollView, NSHashTable, NSMutableSet, NSString;

@interface ASCMetricsScrollObserver : NSObject <_UIScrollViewScrollObserver> {

	UIScrollView* _scrollView;
	NSHashTable* _delegates;
	NSMutableSet* _appearedModelIDs;
	NSMutableSet* _renderedModelIDs;

}

@property (nonatomic,__weak,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) NSHashTable * delegates;                       //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSMutableSet * appearedModelIDs;               //@synthesize appearedModelIDs=_appearedModelIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * renderedModelIDs;               //@synthesize renderedModelIDs=_renderedModelIDs - In the implementation block
@property (nonatomic,readonly) CGRect visibleRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerForScrollView:(id)arg1 ;
-(NSHashTable *)delegates;
-(id)initWithScrollView:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(CGRect)visibleRect;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)dealloc;
-(BOOL)hasModelAppeared:(id)arg1 ;
-(BOOL)hasModelRendered:(id)arg1 ;
-(void)modelDidRender:(id)arg1 ;
-(CGPoint)centerOfView:(id)arg1 ;
-(void)modelDidAppear:(id)arg1 ;
-(NSMutableSet *)appearedModelIDs;
-(NSMutableSet *)renderedModelIDs;
-(BOOL)isDelegateAdded:(id)arg1 ;
@end

