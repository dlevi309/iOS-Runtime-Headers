/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFDailyStatusEvent : WFEvent {

	BOOL _installed;
	BOOL _sharingEnabled;
	BOOL _personalAutomationsEnabled;
	BOOL _homeAutomationsEnabled;
	NSString* _key;

}

@property (nonatomic,copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL installed;                               //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL sharingEnabled;                          //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL personalAutomationsEnabled;              //@synthesize personalAutomationsEnabled=_personalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL homeAutomationsEnabled;                  //@synthesize homeAutomationsEnabled=_homeAutomationsEnabled - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(BOOL)installed;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setHomeAutomationsEnabled:(BOOL)arg1 ;
-(void)setPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)personalAutomationsEnabled;
-(BOOL)homeAutomationsEnabled;
@end

