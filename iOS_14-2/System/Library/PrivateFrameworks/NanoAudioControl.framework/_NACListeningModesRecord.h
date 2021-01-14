/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@class NSOrderedSet, NSString, NSMutableSet;

@interface _NACListeningModesRecord : NSObject {

	NSOrderedSet* _availableListeningModes;
	NSString* _currentListeningMode;
	NSMutableSet* _observers;

}

@property (nonatomic,retain) NSOrderedSet * availableListeningModes;              //@synthesize availableListeningModes=_availableListeningModes - In the implementation block
@property (nonatomic,retain) NSString * currentListeningMode;                     //@synthesize currentListeningMode=_currentListeningMode - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                            //@synthesize observers=_observers - In the implementation block
-(NSMutableSet *)observers;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(void)setAvailableListeningModes:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)availableListeningModes;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(NSString *)arg1 ;
@end

