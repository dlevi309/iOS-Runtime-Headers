/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

