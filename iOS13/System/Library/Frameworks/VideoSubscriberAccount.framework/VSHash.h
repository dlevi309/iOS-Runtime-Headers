/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSData;

@interface VSHash : NSObject {

	BOOL _finalized;
	NSData* _finalData;
	CC_SHA256state_st _ctx;

}

@property (assign,getter=isFinalized,nonatomic) BOOL finalized;              //@synthesize finalized=_finalized - In the implementation block
@property (assign,nonatomic) CC_SHA256state_st ctx;                          //@synthesize ctx=_ctx - In the implementation block
@property (nonatomic,copy) NSData * finalData;                               //@synthesize finalData=_finalData - In the implementation block
-(id)init;
-(void)dealloc;
-(CC_SHA256state_st)ctx;
-(void)setCtx:(CC_SHA256state_st)arg1 ;
-(void)updateWithData:(id)arg1 ;
-(BOOL)isFinalized;
-(void)updateWithString:(id)arg1 ;
-(void)updateWithDate:(id)arg1 ;
-(void)updateWithInteger:(long long)arg1 ;
-(NSData *)finalData;
-(void)setFinalized:(BOOL)arg1 ;
-(void)setFinalData:(NSData *)arg1 ;
-(void)updateWithUUID:(id)arg1 ;
@end

