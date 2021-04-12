/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REDonatedActionIdentifierProviding;
@class NSString;

@interface _REPerformedActionKey : NSObject {

	id<REDonatedActionIdentifierProviding> _identifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) id<REDonatedActionIdentifierProviding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)keyForBundleIdentifier:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<REDonatedActionIdentifierProviding>)identifier;
-(NSString *)bundleIdentifier;
@end

