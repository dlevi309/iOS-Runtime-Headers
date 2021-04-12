/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domainIdentifier;
-(NSString *)bundleIdentifier;
-(NSArray *)itemIdentifiers;
-(id)initWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3 ;
@end

