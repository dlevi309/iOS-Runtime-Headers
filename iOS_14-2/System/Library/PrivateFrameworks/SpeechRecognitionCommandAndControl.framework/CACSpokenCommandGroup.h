/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSString, NSMutableArray;

@interface CACSpokenCommandGroup : NSObject {

	NSString* _identifier;
	NSMutableArray* _commandsArray;
	NSString* _displayString;
	BOOL _isEnabled;
	BOOL _isCustom;
	BOOL _isConfirmationRequired;
	unsigned long long _searchScore;

}

@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * commandsArray;              //@synthesize commandsArray=_commandsArray - In the implementation block
@property (nonatomic,retain) NSString * displayString;                    //@synthesize displayString=_displayString - In the implementation block
@property (assign,nonatomic) unsigned long long searchScore;              //@synthesize searchScore=_searchScore - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                              //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL isCustom;                               //@synthesize isCustom=_isCustom - In the implementation block
@property (assign,nonatomic) BOOL isConfirmationRequired;                 //@synthesize isConfirmationRequired=_isConfirmationRequired - In the implementation block
-(NSString *)displayString;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)isGroup;
-(void)setLocale:(id)arg1 ;
-(BOOL)isCustom;
-(void)setDisplayString:(NSString *)arg1 ;
-(id)description;
-(void)setIsCustom:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)saveToPreferences;
-(id)cloneWithoutCommands;
-(NSMutableArray *)commandsArray;
-(void)setIsConfirmationRequired:(BOOL)arg1 ;
-(void)setCommandsArray:(NSMutableArray *)arg1 ;
-(BOOL)isConfirmationRequired;
-(unsigned long long)searchScore;
-(void)setSearchScore:(unsigned long long)arg1 ;
@end

