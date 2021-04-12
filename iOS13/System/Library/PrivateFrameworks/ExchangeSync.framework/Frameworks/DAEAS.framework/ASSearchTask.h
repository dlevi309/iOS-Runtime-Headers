/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class DASearchQuery;

@interface ASSearchTask : ASTask {

	int _numDownloadedElements;
	DASearchQuery* _query;

}

@property (nonatomic,retain) DASearchQuery * query;                  //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) int numDownloadedElements;              //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
-(id)description;
-(DASearchQuery *)query;
-(void)setQuery:(DASearchQuery *)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(int)numDownloadedElements;
-(void)setNumDownloadedElements:(int)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
@end

