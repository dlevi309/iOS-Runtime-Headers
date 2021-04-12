/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)bundleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id<REDonatedActionIdentifierProviding>)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

