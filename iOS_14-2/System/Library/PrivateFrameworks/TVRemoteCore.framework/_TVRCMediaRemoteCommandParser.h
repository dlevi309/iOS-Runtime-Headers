/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

