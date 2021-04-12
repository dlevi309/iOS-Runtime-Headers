/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Foundation/NSFormatter.h>

@class HMHome, CNContactFormatter;

@interface HFUserNameFormatter : NSFormatter {

	unsigned long long _style;
	HMHome* _home;
	CNContactFormatter* _contactFormatter;

}

@property (nonatomic,readonly) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (assign,nonatomic) unsigned long long style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                      //@synthesize home=_home - In the implementation block
+(long long)_contactFormatterStyleForUserNameStyle:(unsigned long long)arg1 ;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(HMHome *)home;
-(CNContactFormatter *)contactFormatter;
-(id)initWithHome:(id)arg1 ;
@end

