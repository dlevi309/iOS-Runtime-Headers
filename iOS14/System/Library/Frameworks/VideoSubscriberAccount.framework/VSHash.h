/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CC_SHA256state_st)ctx;
-(BOOL)isFinalized;
-(id)init;
-(void)updateWithDate:(id)arg1 ;
-(void)setCtx:(CC_SHA256state_st)arg1 ;
-(void)updateWithData:(id)arg1 ;
-(void)setFinalized:(BOOL)arg1 ;
-(void)updateWithString:(id)arg1 ;
-(void)dealloc;
-(NSData *)finalData;
-(void)setFinalData:(NSData *)arg1 ;
-(void)updateWithInteger:(long long)arg1 ;
-(void)updateWithUUID:(id)arg1 ;
@end

