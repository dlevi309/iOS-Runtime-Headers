/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class SSURLBag;

@interface VSStoreURLBag : NSObject {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;              //@synthesize bag=_bag - In the implementation block
-(void)invalidateCache;
-(id)init;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

