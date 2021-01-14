/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPSearchClientTemplateDelegate.h>

@protocol CPSearchTemplateDelegate;
@class NSArray, NAFuture, NSString;

@interface CPSearchTemplate : CPTemplate <CPSearchClientTemplateDelegate> {

	id<CPSearchTemplateDelegate> _delegate;
	NSArray* _listItems;

}

@property (nonatomic,retain) NSArray * listItems;                                       //@synthesize listItems=_listItems - In the implementation block
@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (assign,nonatomic,__weak) id<CPSearchTemplateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPSearchTemplateDelegate>)delegate;
-(void)setDelegate:(id<CPSearchTemplateDelegate>)arg1 ;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(NSArray *)listItems;
-(void)setListItems:(NSArray *)arg1 ;
-(id)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(id)trailingNavigationBarButtons;
-(void)searchTemplate:(id)arg1 updateSearchResultsForSearchText:(id)arg2 completionResults:(/*^block*/id)arg3 ;
-(void)searchTemplate:(id)arg1 selectedResult:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)searchTemplateSearchButtonPressed:(id)arg1 ;
@end

