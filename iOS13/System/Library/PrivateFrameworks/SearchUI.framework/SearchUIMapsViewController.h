/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <MapKit/_MKPlaceViewController.h>
#import <libobjc.A.dylib/_MKPlaceViewControllerFeedbackDelegate.h>

@protocol SFFeedbackListener;
@class NSString;

@interface SearchUIMapsViewController : _MKPlaceViewController <_MKPlaceViewControllerFeedbackDelegate> {

	id<SFFeedbackListener> _feedbackListener;
	unsigned long long _queryId;

}

@property (__weak) id<SFFeedbackListener> feedbackListener;              //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (readonly) unsigned long long queryId;                         //@synthesize queryId=_queryId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)queryId;
-(void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2 ;
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(id)initWithMapsData:(id)arg1 feedbackListener:(id)arg2 queryId:(unsigned long long)arg3 ;
@end

