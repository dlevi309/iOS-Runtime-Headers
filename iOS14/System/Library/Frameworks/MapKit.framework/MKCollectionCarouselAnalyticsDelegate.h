/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKCollectionCarouselAnalyticsDelegate <NSObject>
@optional
-(void)collectionsCarouselDidScrollForward;
-(void)collectionsCarouselDidScrollBackward;
-(void)collectionsCarouselDidScrollDown;
-(void)collectionsCarouselDidScrollUp;

@required
-(void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(BOOL)arg3;

@end

