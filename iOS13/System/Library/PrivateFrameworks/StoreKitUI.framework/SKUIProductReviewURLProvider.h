/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSURL, NSString, SSURLBag;

@interface SKUIProductReviewURLProvider : NSObject {

	NSURL* _rateURL;
	NSURL* _writeReviewURL;
	NSString* _itemID;
	SSURLBag* _urlBag;

}

@property (nonatomic,copy) NSString * itemID;                     //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) SSURLBag * urlBag;                   //@synthesize urlBag=_urlBag - In the implementation block
@property (nonatomic,retain) NSURL * rateURL;                     //@synthesize rateURL=_rateURL - In the implementation block
@property (nonatomic,retain) NSURL * writeReviewURL;              //@synthesize writeReviewURL=_writeReviewURL - In the implementation block
-(id)init;
-(NSString *)itemID;
-(void)setItemID:(NSString *)arg1 ;
-(SSURLBag *)urlBag;
-(id)initWithClientContext:(id)arg1 itemID:(id)arg2 ;
-(id)_urlByAppendingItemId:(id)arg1 ;
-(void)setRateURL:(NSURL *)arg1 ;
-(void)setWriteReviewURL:(NSURL *)arg1 ;
-(void)fetchURLsWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)rateURL;
-(NSURL *)writeReviewURL;
-(void)setUrlBag:(SSURLBag *)arg1 ;
@end

