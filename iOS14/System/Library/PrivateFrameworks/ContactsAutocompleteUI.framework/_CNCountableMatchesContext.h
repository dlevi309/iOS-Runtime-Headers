/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class NSMutableDictionary, NSMutableSet;

@interface _CNCountableMatchesContext : NSObject {

	NSMutableDictionary* _contactsCount;
	long long _maxCount;
	NSMutableSet* _highestMatches;

}

@property (assign,nonatomic) long long maxCount;                           //@synthesize maxCount=_maxCount - In the implementation block
@property (nonatomic,readonly) NSMutableSet * highestMatches;              //@synthesize highestMatches=_highestMatches - In the implementation block
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(id)init;
-(void)countInstances:(id)arg1 usingPredicate:(/*^block*/id)arg2 ;
-(NSMutableSet *)highestMatches;
@end

