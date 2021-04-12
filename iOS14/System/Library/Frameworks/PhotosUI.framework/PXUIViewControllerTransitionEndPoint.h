/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXUIViewControllerTransitionEndPoint <NSObject>
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
@optional
-(id)regionOfInterestForTransition:(id)arg1;
-(void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2;
-(void)scrollRegionOfInterestToVisible:(id)arg1 forTransition:(id)arg2;
-(id)removeBackgroundColorForTransition:(id)arg1;
-(void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2;
-(void)prepareForInteractiveTransition:(id)arg1;
-(BOOL)keepsSourceRegionOfInterestContent;

@end

