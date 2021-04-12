/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/KnowledgeMonitor-Structs.h>
#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKAirplaneModeMonitor : _DKMonitor {

	BOOL _airplaneModeStatus;
	SCPreferencesRef _radioPrefs;

}

@property (assign,nonatomic) BOOL airplaneModeStatus;              //@synthesize airplaneModeStatus=_airplaneModeStatus - In the implementation block
@property (assign) SCPreferencesRef radioPrefs;                    //@synthesize radioPrefs=_radioPrefs - In the implementation block
+(id)eventStream;
+(id)_eventWithState:(BOOL)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)deactivate;
-(void)setAirplaneModeStatus:(BOOL)arg1 ;
-(void)updateAirplaneModeStatus;
-(BOOL)airplaneModeStatus;
-(SCPreferencesRef)radioPrefs;
-(void)setRadioPrefs:(SCPreferencesRef)arg1 ;
@end

