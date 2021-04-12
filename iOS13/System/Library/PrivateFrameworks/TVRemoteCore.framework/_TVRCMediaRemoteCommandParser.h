/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSArray, NSMutableSet;

@interface _TVRCMediaRemoteCommandParser : NSObject {

	NSArray* _allCommands;
	NSMutableSet* _enabledCommandNames;

}
-(void)_gatherEnabledCommands;
-(BOOL)_containsAnySkipCommands;
-(id)_skipButtons;
-(BOOL)_containsAnyTrackCommands;
-(id)_trackAndSpeedButtons;
-(BOOL)_containsEnabledCommand:(unsigned)arg1 ;
-(id)buttonsForCommands:(id)arg1 ;
@end

