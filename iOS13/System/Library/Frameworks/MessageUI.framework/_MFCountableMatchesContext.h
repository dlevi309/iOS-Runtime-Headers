/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSMutableSet;

@interface _MFCountableMatchesContext : NSObject {

	CFDictionaryRef _peopleCount;
	NSMutableSet* _popularPeople;
	long long _maxCount;

}

@property (assign,nonatomic) long long maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(void)countInstances:(id)arg1 usingPredicate:(/*^block*/id)arg2 ;
-(id)highestMatches;
@end

