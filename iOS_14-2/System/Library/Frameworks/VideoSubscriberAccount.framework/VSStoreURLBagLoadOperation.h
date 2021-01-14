/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executionDidBegin;
-(void)setError:(NSError *)arg1 ;
-(VSStoreURLBag *)bag;
-(NSError *)error;
-(void)setValue:(id)arg1 ;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(id)value;
-(NSString *)bagKey;
@end

