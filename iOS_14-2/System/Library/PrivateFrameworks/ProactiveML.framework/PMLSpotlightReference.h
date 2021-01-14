/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class NSArray, NSString;

@interface PMLSpotlightReference : NSObject {

	NSArray* _itemIdentifiers;
	NSString* _domainIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSArray * itemIdentifiers;                //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;              //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)referenceWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3 ;
-(NSArray *)itemIdentifiers;
-(NSString *)domainIdentifier;
-(NSString *)bundleIdentifier;
-(id)initWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3 ;
@end

