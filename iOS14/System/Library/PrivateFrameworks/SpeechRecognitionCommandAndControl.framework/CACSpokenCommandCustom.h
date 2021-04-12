/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)customProperties;
-(id)description;
-(id)initWithCommandIdentifier:(id)arg1 ;
-(BOOL)isCustomCommand;
-(void)handleSpokenCommand:(id)arg1 ;
-(void)setPrimaryCommand:(NSString *)arg1 ;
-(NSString *)primaryCommand;
@end

