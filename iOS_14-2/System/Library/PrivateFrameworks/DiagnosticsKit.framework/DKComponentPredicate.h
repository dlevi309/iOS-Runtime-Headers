/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@class NSString;

@interface DKComponentPredicate : NSObject {

	BOOL _exactMatch;
	NSString* _type;
	NSString* _identifier;
	NSString* _domain;

}

@property (nonatomic,readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL exactMatch;                    //@synthesize exactMatch=_exactMatch - In the implementation block
+(id)componentPredicateWithDomain:(id)arg1 exactMatch:(BOOL)arg2 ;
+(id)componentPredicateWithType:(id)arg1 identifier:(id)arg2 ;
+(id)componentPredicateMatchingComponentIdentity:(id)arg1 ;
-(NSString *)domain;
-(NSString *)type;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)exactMatch;
-(id)initWithDomain:(id)arg1 exactMatch:(BOOL)arg2 ;
-(BOOL)isEqualToComponentPredicate:(id)arg1 ;
-(BOOL)matchesComponentIdentity:(id)arg1 ;
@end

