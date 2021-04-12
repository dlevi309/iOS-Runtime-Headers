/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray, NSError, FCFeedRange;

@interface FCFeedResponse : NSObject {

	BOOL _exhaustedRequestRange;
	NSString* _feedID;
	NSArray* _feedItems;
	NSError* _error;

}

@property (nonatomic,copy) NSString * feedID;                             //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) NSArray * feedItems;                           //@synthesize feedItems=_feedItems - In the implementation block
@property (assign,nonatomic) BOOL exhaustedRequestRange;                  //@synthesize exhaustedRequestRange=_exhaustedRequestRange - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) FCFeedRange * feedRange; 
-(FCFeedRange *)feedRange;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setFeedItems:(NSArray *)arg1 ;
-(id)feedResponseByMergingWithResponse:(id)arg1 ;
-(NSError *)error;
-(BOOL)exhaustedRequestRange;
-(NSArray *)feedItems;
-(void)setExhaustedRequestRange:(BOOL)arg1 ;
-(NSString *)feedID;
@end

