/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
*/


@class NSString;

@interface APResult : NSObject {

	NSString* _bundleIdentifier;
	NSString* _buyParams;
	NSString* _itemIdentifier;
	NSString* _productType;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * buyParams;                     //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * productType;                   //@synthesize productType=_productType - In the implementation block
-(NSString *)itemIdentifier;
-(id)compile;
-(NSString *)productType;
-(NSString *)bundleIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)buyParams;
-(id)initWithBundleIdentifier:(id)arg1 buyParams:(id)arg2 itemIdentifier:(id)arg3 productType:(id)arg4 ;
@end

