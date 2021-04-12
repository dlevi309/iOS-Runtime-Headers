/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/


@class BNPostingContext;

@interface BNPendingDequeuePromise : NSObject {

	/*^block*/id _dequeueBlock;
	BNPostingContext* _postingContext;

}

@property (nonatomic,readonly) BNPostingContext * postingContext;              //@synthesize postingContext=_postingContext - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)dequeue;
-(BOOL)isValid;
-(BNPostingContext *)postingContext;
-(id)initWithPostingContext:(id)arg1 dequeueBlock:(/*^block*/id)arg2 ;
@end

