/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUIDisambiguationAnalyticsManagerDataSource, AFDisambiguationAssistance;
@class NSArray;

@interface AFUIDisambiguationAnalyticsManager : NSObject {

	id<AFUIDisambiguationAnalyticsManagerDataSource> _dataSource;
	NSArray* _listItems;
	id<AFDisambiguationAssistance> _disambiguationAssistance;

}

@property (assign,nonatomic,__weak) id<AFUIDisambiguationAnalyticsManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * listItems;                                                             //@synthesize listItems=_listItems - In the implementation block
@property (nonatomic,retain) id<AFDisambiguationAssistance> disambiguationAssistance;                         //@synthesize disambiguationAssistance=_disambiguationAssistance - In the implementation block
+(id)sharedManager;
-(id<AFUIDisambiguationAnalyticsManagerDataSource>)dataSource;
-(void)setDataSource:(id<AFUIDisambiguationAnalyticsManagerDataSource>)arg1 ;
-(NSArray *)listItems;
-(id)_listItemMatchingAceId:(id)arg1 ;
-(id<AFDisambiguationAssistance>)disambiguationAssistance;
-(void)_logDisambiguationSelectedEventWithListItem:(id)arg1 ;
-(id)_allListItems;
-(void)_recordSASMetrics:(id)arg1 withSelectedBundleId:(id)arg2 originalCommandId:(id)arg3 ;
-(void)logDisambiguationItemSelected:(id)arg1 ;
-(void)logDisambiguationDismissedEvent;
-(void)setListItems:(NSArray *)arg1 ;
-(void)setDisambiguationAssistance:(id<AFDisambiguationAssistance>)arg1 ;
@end

