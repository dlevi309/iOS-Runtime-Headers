/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)feedID;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setFeedItems:(NSArray *)arg1 ;
-(FCFeedRange *)feedRange;
-(id)feedResponseByMergingWithResponse:(id)arg1 ;
-(NSArray *)feedItems;
-(void)setExhaustedRequestRange:(BOOL)arg1 ;
-(BOOL)exhaustedRequestRange;
@end

