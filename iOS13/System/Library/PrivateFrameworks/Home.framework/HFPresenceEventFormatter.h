/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Foundation/NSFormatter.h>

@class HMHome;

@interface HFPresenceEventFormatter : NSFormatter {

	unsigned long long _nameType;
	unsigned long long _style;
	HMHome* _home;

}

@property (assign,nonatomic) unsigned long long nameType;              //@synthesize nameType=_nameType - In the implementation block
@property (assign,nonatomic) unsigned long long style;                 //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) HMHome * home;                            //@synthesize home=_home - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(unsigned long long)nameType;
-(void)setNameType:(unsigned long long)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)stringForPresenceEventBuilder:(id)arg1 ;
-(id)_formattedListForSelectedUsers:(id)arg1 inHome:(id)arg2 ;
-(id)stringForPresenceEvent:(id)arg1 ;
@end

