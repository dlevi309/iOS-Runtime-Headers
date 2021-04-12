/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/


@class NSMutableDictionary, NSMutableSet;

@interface _MSCountableMatchesContext : NSObject {

	NSMutableDictionary* _contactsCount;
	long long _maxCount;
	NSMutableSet* _highestMatches;

}

@property (assign,nonatomic) long long maxCount;                           //@synthesize maxCount=_maxCount - In the implementation block
@property (nonatomic,readonly) NSMutableSet * highestMatches;              //@synthesize highestMatches=_highestMatches - In the implementation block
-(id)init;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(void)countInstances:(id)arg1 usingPredicate:(/*^block*/id)arg2 ;
-(NSMutableSet *)highestMatches;
@end

