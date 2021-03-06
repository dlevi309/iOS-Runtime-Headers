/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString, NSDictionary;

@interface VUIMetricsPageEventData : NSObject {

	NSString* _pageId;
	NSString* _pageType;
	NSDictionary* _eventData;

}

@property (nonatomic,retain) NSString * pageId;                     //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,retain) NSString * pageType;                   //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,retain) NSDictionary * eventData;              //@synthesize eventData=_eventData - In the implementation block
+(id)createWithPageId:(id)arg1 andPageType:(id)arg2 andEventData:(id)arg3 ;
+(id)createWithPageType:(id)arg1 ;
+(id)createWithMetricsData:(id)arg1 ;
-(NSString *)pageId;
-(NSString *)pageType;
-(void)setPageType:(NSString *)arg1 ;
-(void)setPageId:(NSString *)arg1 ;
-(NSDictionary *)eventData;
-(void)setEventData:(NSDictionary *)arg1 ;
-(id)generateMetricsDataDictionary;
@end

