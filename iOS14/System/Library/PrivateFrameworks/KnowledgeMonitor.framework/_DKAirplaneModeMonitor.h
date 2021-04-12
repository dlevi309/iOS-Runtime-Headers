/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/KnowledgeMonitor-Structs.h>
#import <KnowledgeMonitor/_DKMonitor.h>

@class NSNumber;

@interface _DKAirplaneModeMonitor : _DKMonitor {

	NSNumber* _airplaneModeStatus;
	SCPreferencesRef _radioPrefs;

}

@property (nonatomic,retain) NSNumber * airplaneModeStatus;              //@synthesize airplaneModeStatus=_airplaneModeStatus - In the implementation block
@property (assign) SCPreferencesRef radioPrefs;                          //@synthesize radioPrefs=_radioPrefs - In the implementation block
+(id)eventStream;
+(id)_eventWithState:(BOOL)arg1 ;
-(SCPreferencesRef)radioPrefs;
-(void)setRadioPrefs:(SCPreferencesRef)arg1 ;
-(void)start;
-(NSNumber *)airplaneModeStatus;
-(void)updateAirplaneModeStatus;
-(void)stop;
-(void)deactivate;
-(void)setAirplaneModeStatus:(NSNumber *)arg1 ;
-(void)dealloc;
@end

