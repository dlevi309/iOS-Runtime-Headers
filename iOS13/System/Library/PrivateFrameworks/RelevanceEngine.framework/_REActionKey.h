/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REDonatedActionIdentifierProviding;
@class NSString;

@interface _REActionKey : NSObject {

	unsigned long long _hash;
	NSString* _identifier;
	id<REDonatedActionIdentifierProviding> _actionType;
	unsigned long long _relevanceProvidersHash;

}

@property (nonatomic,readonly) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<REDonatedActionIdentifierProviding> actionType;              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) unsigned long long relevanceProvidersHash;                      //@synthesize relevanceProvidersHash=_relevanceProvidersHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id<REDonatedActionIdentifierProviding>)actionType;
-(unsigned long long)relevanceProvidersHash;
-(id)initWithIdentifier:(id)arg1 actionType:(id)arg2 relevanceProvidersHash:(unsigned long long)arg3 ;
@end

