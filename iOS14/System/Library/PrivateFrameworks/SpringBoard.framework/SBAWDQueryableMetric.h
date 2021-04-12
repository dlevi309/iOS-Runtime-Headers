/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAWDMetric.h>

@class AWDServerConnection;

@interface SBAWDQueryableMetric : SBAWDMetric {

	AWDServerConnection* _connection;
	/*^block*/id _builder;

}
-(void)_postQueryableMetric;
-(void)registerWithDataBuilder:(/*^block*/id)arg1 ;
@end

