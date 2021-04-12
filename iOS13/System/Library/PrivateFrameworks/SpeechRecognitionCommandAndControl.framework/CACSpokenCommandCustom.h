/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/CACSpokenCommand.h>

@class NSDictionary, NSString;

@interface CACSpokenCommandCustom : CACSpokenCommand {

	NSDictionary* _customProperties;
	NSString* _primaryCommand;

}

@property (readonly) NSDictionary * customProperties;              //@synthesize customProperties=_customProperties - In the implementation block
@property (retain) NSString * primaryCommand;                      //@synthesize primaryCommand=_primaryCommand - In the implementation block
-(id)description;
-(NSDictionary *)customProperties;
-(id)initWithCommandIdentifier:(id)arg1 ;
-(BOOL)isCustomCommand;
-(void)handleSpokenCommand:(id)arg1 ;
-(void)setPrimaryCommand:(NSString *)arg1 ;
-(NSString *)primaryCommand;
@end

