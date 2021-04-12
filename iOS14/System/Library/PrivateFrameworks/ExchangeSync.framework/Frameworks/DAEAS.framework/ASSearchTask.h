/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(DASearchQuery *)query;
-(int)numDownloadedElements;
-(id)description;
-(id)initWithQuery:(id)arg1 ;
-(void)setNumDownloadedElements:(int)arg1 ;
-(void)setQuery:(DASearchQuery *)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
@end

