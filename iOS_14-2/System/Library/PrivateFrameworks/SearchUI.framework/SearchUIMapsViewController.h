/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(unsigned long long)queryId;
-(void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2 ;
-(id)initWithMapsData:(id)arg1 feedbackListener:(id)arg2 queryId:(unsigned long long)arg3 ;
@end

