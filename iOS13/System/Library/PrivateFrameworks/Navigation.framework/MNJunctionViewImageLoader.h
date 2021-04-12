/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSArray;

@interface MNJunctionViewImageLoader : NSObject {

	NSArray* _preloadEvents;
	double _imageWidth;
	double _imageHeight;

}
-(id)init;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(id)_stringForImageIDs:(id)arg1 ;
-(void)imagesForJunctionView:(id)arg1 eventID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_imagesForIDs:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_imagesForRequest:(id)arg1 response:(id)arg2 ;
-(void)setJunctionViewEvents:(id)arg1 ;
-(void)updateForLocation:(id)arg1 remainingDistanceOnRoute:(double)arg2 ;
@end

