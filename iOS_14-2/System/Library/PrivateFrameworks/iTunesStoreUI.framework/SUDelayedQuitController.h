/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSMutableArray;

@interface SUDelayedQuitController : NSObject {

	long long _delayTerminateCount;
	NSMutableArray* _longLivedViewControllers;

}
+(id)sharedInstance;
+(void)beginDelayingTerminate;
+(void)endDelayingTerminate;
+(BOOL)isDelayingTerminate;
+(void)checkInLongLivedViewController:(id)arg1 ;
+(void)checkOutLongLivedViewController:(id)arg1 ;
+(BOOL)viewControllerIsLongLived:(id)arg1 ;
+(id)checkedInViewControllerOfClass:(Class)arg1 ;
-(void)dealloc;
-(void)_checkInLongLivedViewController:(id)arg1 ;
-(void)_checkOutLongLivedViewController:(id)arg1 ;
-(BOOL)_viewControllerIsLongLived:(id)arg1 ;
-(id)_checkedInViewControllerOfClass:(Class)arg1 ;
-(BOOL)_isDelayingTerminate;
-(void)_beginDelayingTerminate;
-(void)_endDelayingTerminate;
@end

