/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray;

@interface VUIMediaEntitiesFetchControllerResult : NSObject {

	long long _fetchReason;
	NSArray* _fetchResponses;
	NSArray* _fetchResponseChanges;

}

@property (assign,nonatomic) long long fetchReason;                     //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,copy) NSArray * fetchResponses;                    //@synthesize fetchResponses=_fetchResponses - In the implementation block
@property (nonatomic,copy) NSArray * fetchResponseChanges;              //@synthesize fetchResponseChanges=_fetchResponseChanges - In the implementation block
-(id)init;
-(id)description;
-(long long)fetchReason;
-(void)setFetchReason:(long long)arg1 ;
-(NSArray *)fetchResponses;
-(NSArray *)fetchResponseChanges;
-(void)setFetchResponseChanges:(NSArray *)arg1 ;
-(id)initWithFetchReason:(long long)arg1 fetchResponses:(id)arg2 ;
-(void)setFetchResponses:(NSArray *)arg1 ;
@end

