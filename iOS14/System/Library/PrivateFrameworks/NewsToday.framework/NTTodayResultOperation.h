/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, NFCopying;
@class NTPBTodayResultOperationInfo;

@interface NTTodayResultOperation : FCOperation {

	id<FCContentContext> _contentContext;
	NTPBTodayResultOperationInfo* _operationInfo;
	id<NFCopying> _prefetchedContent;
	/*^block*/id _headlineResultCompletionHandler;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;                     //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) NTPBTodayResultOperationInfo * operationInfo;              //@synthesize operationInfo=_operationInfo - In the implementation block
@property (nonatomic,copy) id<NFCopying> prefetchedContent;                           //@synthesize prefetchedContent=_prefetchedContent - In the implementation block
@property (nonatomic,copy) id headlineResultCompletionHandler;                        //@synthesize headlineResultCompletionHandler=_headlineResultCompletionHandler - In the implementation block
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id)init;
-(id<FCContentContext>)contentContext;
-(NTPBTodayResultOperationInfo *)operationInfo;
-(id<NFCopying>)prefetchedContent;
-(void)setPrefetchedContent:(id<NFCopying>)arg1 ;
-(void)setOperationInfo:(NTPBTodayResultOperationInfo *)arg1 ;
-(void)setHeadlineResultCompletionHandler:(id)arg1 ;
-(id)headlineResultCompletionHandler;
@end

