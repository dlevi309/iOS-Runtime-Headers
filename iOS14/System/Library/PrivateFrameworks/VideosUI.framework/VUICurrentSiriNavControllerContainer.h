/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSPointerArray;

@interface VUICurrentSiriNavControllerContainer : NSObject {

	NSPointerArray* _activeNavigationControllers;

}

@property (nonatomic,retain) NSPointerArray * activeNavigationControllers;              //@synthesize activeNavigationControllers=_activeNavigationControllers - In the implementation block
+(id)sharedInstance;
+(BOOL)isRunningInSiriPluggin;
-(id)init;
-(id)currentSiriNavController;
-(void)setCurrentSiriNavController:(id)arg1 ;
-(NSPointerArray *)activeNavigationControllers;
-(void)setActiveNavigationControllers:(NSPointerArray *)arg1 ;
@end

