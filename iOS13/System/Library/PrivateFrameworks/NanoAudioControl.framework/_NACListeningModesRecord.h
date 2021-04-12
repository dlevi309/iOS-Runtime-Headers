/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(void)setAvailableListeningModes:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)availableListeningModes;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(NSString *)arg1 ;
@end

