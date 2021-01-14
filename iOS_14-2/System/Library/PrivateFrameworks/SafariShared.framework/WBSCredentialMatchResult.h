/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSArray;

@interface WBSCredentialMatchResult : NSObject {

	NSArray* _exactMatches;
	NSArray* _potentialMatches;
	NSArray* _associatedDomainMatches;

}

@property (nonatomic,copy,readonly) NSArray * exactMatches;                         //@synthesize exactMatches=_exactMatches - In the implementation block
@property (nonatomic,copy,readonly) NSArray * potentialMatches;                     //@synthesize potentialMatches=_potentialMatches - In the implementation block
@property (nonatomic,copy,readonly) NSArray * associatedDomainMatches;              //@synthesize associatedDomainMatches=_associatedDomainMatches - In the implementation block
-(id)initWithExactMatches:(id)arg1 potentialMatches:(id)arg2 associatedDomainMatches:(id)arg3 ;
-(NSArray *)exactMatches;
-(NSArray *)potentialMatches;
-(NSArray *)associatedDomainMatches;
@end

