/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)exactMatches;
-(id)initWithExactMatches:(id)arg1 potentialMatches:(id)arg2 associatedDomainMatches:(id)arg3 ;
-(NSArray *)potentialMatches;
-(NSArray *)associatedDomainMatches;
@end

