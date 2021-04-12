/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)itemIdentifier;
-(NSString *)buyParams;
-(NSString *)productType;
-(id)compile;
-(id)initWithBundleIdentifier:(id)arg1 buyParams:(id)arg2 itemIdentifier:(id)arg3 productType:(id)arg4 ;
@end

