/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSMutableDictionary, NSDictionary;

@interface SSVRedeemCodeItem : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * redeemCodeDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier; 
-(long long)itemIdentifier;
-(id)initWithRedeemCodeDictionary:(id)arg1 ;
-(id)initWithLookupItem:(id)arg1 ;
-(NSDictionary *)redeemCodeDictionary;
@end

