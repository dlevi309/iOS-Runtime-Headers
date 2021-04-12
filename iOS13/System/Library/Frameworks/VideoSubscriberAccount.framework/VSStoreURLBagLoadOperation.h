/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSStoreURLBag, NSString, NSError;

@interface VSStoreURLBagLoadOperation : VSAsyncOperation {

	VSStoreURLBag* _bag;
	NSString* _bagKey;
	id _value;
	NSError* _error;

}

@property (nonatomic,retain) id value;                         //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSError * error;                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VSStoreURLBag * bag;              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                  //@synthesize bagKey=_bagKey - In the implementation block
-(NSError *)error;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSString *)bagKey;
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(void)executionDidBegin;
@end

