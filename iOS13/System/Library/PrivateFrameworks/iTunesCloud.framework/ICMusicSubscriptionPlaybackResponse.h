/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICStoreResponseProtocol.h>

@class NSDictionary, NSDate, ICURLBag, NSData, ICStoreDialogResponse, NSString, NSArray, NSError;

@interface ICMusicSubscriptionPlaybackResponse : NSObject <ICStoreResponseProtocol> {

	NSDictionary* _responseDictionary;
	NSDate* _requestDate;
	ICURLBag* _urlBag;

}

@property (nonatomic,copy,readonly) NSData * leaseInfoData; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,copy,readonly) NSString * householdID; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,copy,readonly) NSError * serverError; 
@property (nonatomic,copy,readonly) NSDictionary * metricsDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(id)itemWithStoreAdamID:(long long)arg1 ;
-(NSDictionary *)metricsDictionary;
-(NSError *)serverError;
-(ICStoreDialogResponse *)dialog;
-(NSString *)householdID;
-(NSData *)leaseInfoData;
-(NSData *)subscriptionKeyBagData;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3 ;
-(NSDate *)leaseExpirationDate;
@end

