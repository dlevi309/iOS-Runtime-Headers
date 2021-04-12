/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/_MKPlaceViewControllerFeedbackDelegate.h>

@protocol WBSParsecSearchResultPresentedInCardWBSCompletionListItem;
@class NSString;

@interface WBSParsecSearchMapsResultFeedbackSender : NSObject <_MKPlaceViewControllerFeedbackDelegate> {

	long long _queryID;
	id<WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> _searchResult;

}

@property (nonatomic,__weak,readonly) id<WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WBSParsecSearchResultPresentedInCard><WBSCompletionListItem>)searchResult;
-(void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2 ;
-(id)initWithSearchResult:(id)arg1 ;
@end

