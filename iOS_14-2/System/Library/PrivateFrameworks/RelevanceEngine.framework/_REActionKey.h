/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<REDonatedActionIdentifierProviding>)actionType;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)relevanceProvidersHash;
-(id)initWithIdentifier:(id)arg1 actionType:(id)arg2 relevanceProvidersHash:(unsigned long long)arg3 ;
@end

