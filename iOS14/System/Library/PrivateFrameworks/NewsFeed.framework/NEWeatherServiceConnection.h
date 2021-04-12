/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/


@class WFServiceConnection;

@interface NEWeatherServiceConnection : NSObject {

	WFServiceConnection* _connection;

}

@property (nonatomic,readonly) WFServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(WFServiceConnection *)connection;
-(void)enqueueRequest:(id)arg1 ;
@end

