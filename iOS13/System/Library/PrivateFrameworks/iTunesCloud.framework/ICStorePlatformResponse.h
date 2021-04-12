/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICStorePlatformResponse.h>

@class NSNumber, NSDate, NSArray, NSDictionary, NSString;

@interface ICStorePlatformResponse : NSObject <ICStorePlatformResponse> {

	NSNumber* _accountIdentifier;
	NSNumber* _enqueuerAccountIdentifier;
	NSDate* _expirationDate;
	NSArray* _requestedItemIdentifiers;
	NSDictionary* _responseDictionary;
	NSString* _storefrontIdentifier;
	BOOL _authenticated;

}

@property (nonatomic,readonly) BOOL mpIsPersonalizedOffer; 
@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resultsDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * allItems; 
@property (nonatomic,copy,readonly) NSNumber * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * enqueuerAccountIdentifier;              //@synthesize enqueuerAccountIdentifier=_enqueuerAccountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
+(BOOL)mpShowBuysWithNoCompletionOffer;
+(BOOL)mpVerboseCMCLogging;
+(BOOL)mpFakeCompletionDataForBuys;
-(BOOL)mpIsPersonalizedOffer;
-(id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(NSNumber *)accountIdentifier;
-(BOOL)isAuthenticated;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)allItems;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
-(NSString *)storefrontIdentifier;
-(NSDictionary *)resultsDictionary;
-(NSNumber *)enqueuerAccountIdentifier;
-(id)initWithURLResponse:(id)arg1 requestedItemIdentifiers:(id)arg2 ;
-(id)initWithResponseDictionary:(id)arg1 requestedItemIdentifiers:(id)arg2 ;
-(void)_enumerateResultDictionariesUsingBlock:(/*^block*/id)arg1 ;
@end

