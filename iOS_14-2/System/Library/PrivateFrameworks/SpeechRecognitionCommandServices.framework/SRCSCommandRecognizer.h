/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


@class NSArray, SRCSCommandRecognitionSystem;

@interface SRCSCommandRecognizer : NSObject {

	NSArray* _spokenCommands;
	SRCSCommandRecognitionSystem* _commandRecognitionSystem;
	BOOL _active;

}

@property (assign) BOOL active;              //@synthesize active=_active - In the implementation block
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)spokenCommands;
-(id)commandRecognitionSystem;
-(id)initWithCommandRecognitionSystem:(id)arg1 commandIdentifiers:(id)arg2 ;
-(id)initWithCommandRecognitionSystem:(id)arg1 spokenCommands:(id)arg2 ;
@end

