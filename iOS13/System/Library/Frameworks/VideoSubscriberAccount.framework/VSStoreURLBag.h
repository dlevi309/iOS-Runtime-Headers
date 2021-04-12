/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class SSURLBag;

@interface VSStoreURLBag : NSObject {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;              //@synthesize bag=_bag - In the implementation block
-(id)init;
-(void)invalidateCache;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

