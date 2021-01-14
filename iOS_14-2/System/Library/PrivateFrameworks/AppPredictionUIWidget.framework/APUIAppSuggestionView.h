/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
*/

#import <AppPredictionUIWidget/APUISuggestionView.h>

@class APUIAppIconDataSource, UITapGestureRecognizer, NSString;

@interface APUIAppSuggestionView : APUISuggestionView {

	APUIAppIconDataSource* _dataSource;
	UITapGestureRecognizer* _tapRecognizer;
	NSString* _appBundleId;

}
-(void)_tapRecognized:(id)arg1 ;
-(void)layoutSuggestion:(id)arg1 ;
-(void)_setAppWithBundleId:(id)arg1 reason:(id)arg2 ;
@end

