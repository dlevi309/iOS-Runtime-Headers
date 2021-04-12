/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(id)init;
-(void)countInstances:(id)arg1 usingPredicate:(/*^block*/id)arg2 ;
-(id)highestMatches;
-(void)dealloc;
@end

