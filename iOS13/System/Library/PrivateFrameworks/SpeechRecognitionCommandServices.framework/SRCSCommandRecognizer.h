/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


@class NSArray, SRCSCommandRecognitionSystem;

@interface SRCSCommandRecognizer : NSObject {

	NSArray* _spokenCommands;
	SRCSCommandRecognitionSystem* _commandRecognitionSystem;
	BOOL _active;

}

@property (assign) BOOL active;              //@synthesize active=_active - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(id)spokenCommands;
-(id)commandRecognitionSystem;
-(id)initWithCommandRecognitionSystem:(id)arg1 commandIdentifiers:(id)arg2 ;
-(id)initWithCommandRecognitionSystem:(id)arg1 spokenCommands:(id)arg2 ;
@end

