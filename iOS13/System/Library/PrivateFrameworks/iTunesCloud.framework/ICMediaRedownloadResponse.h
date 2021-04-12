/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICStoreResponseProtocol.h>

@class NSError, ICStoreDialogResponse, NSDate, ICURLBag, NSDictionary, NSString, NSArray, NSData;

@interface ICMediaRedownloadResponse : NSObject <ICStoreResponseProtocol> {

	NSDate* _requestDate;
	ICURLBag* _urlBag;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) BOOL authorized; 
@property (nonatomic,readonly) BOOL shouldCancelPurchaseBatch; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) unsigned downloadQueueItemCount; 
@property (nonatomic,copy,readonly) NSString * jingleAction; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSError * serverError; 
-(long long)status;
-(NSArray *)items;
-(NSDictionary *)responseDictionary;
-(NSError *)serverError;
-(ICStoreDialogResponse *)dialog;
-(NSData *)subscriptionKeyBagData;
-(BOOL)shouldCancelPurchaseBatch;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3 ;
-(BOOL)authorized;
-(unsigned)downloadQueueItemCount;
-(NSString *)jingleAction;
@end

