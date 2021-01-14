/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSError * serverError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ICStoreDialogResponse *)dialog;
-(NSError *)serverError;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3 ;
-(NSDictionary *)responseDictionary;
-(BOOL)authorized;
-(NSArray *)items;
-(BOOL)shouldCancelPurchaseBatch;
-(NSString *)jingleAction;
-(unsigned)downloadQueueItemCount;
-(NSData *)subscriptionKeyBagData;
-(long long)status;
@end

