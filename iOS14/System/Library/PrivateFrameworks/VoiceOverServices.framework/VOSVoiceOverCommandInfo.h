/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/


@class NSDictionary;

@interface VOSVoiceOverCommandInfo : NSObject {

	NSDictionary* _brailleCommands;

}
-(id)localizedNameForCategory:(id)arg1 ;
-(void)_loadBrailleCommandsIfNecessary;
-(id)brailleVoiceOverCategories;
-(id)brailleCommandsForCategory:(id)arg1 ;
-(id)localizedNameForCommand:(id)arg1 ;
@end

