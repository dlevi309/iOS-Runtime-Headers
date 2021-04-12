/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domain;
-(NSString *)type;
-(NSString *)identifier;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(BOOL)exactMatch;
-(id)initWithDomain:(id)arg1 exactMatch:(BOOL)arg2 ;
-(BOOL)isEqualToComponentPredicate:(id)arg1 ;
-(BOOL)matchesComponentIdentity:(id)arg1 ;
@end

